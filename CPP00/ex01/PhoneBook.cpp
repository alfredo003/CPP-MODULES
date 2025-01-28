#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : next_index(0), total_contacts(0) {}

bool startsWithCapital(const std::string& str)
{
    if (str.empty()) return false;
    return std::isupper(static_cast<unsigned char>(str[0]));
}

bool isOnlyDigits(const std::string& str)
{
    for (char c : str)
    {
        if (!std::isdigit(static_cast<unsigned char>(c)))
        {
            return false;
        }
    }
    return true;
}

void PhoneBook::addContact()
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << "All fields must be filled!" << std::endl;
        return;
    }

    if (!startsWithCapital(firstName)) {
        std::cout << "First name must start with a capital letter!" << std::endl;
        return;
    }
    if (!startsWithCapital(lastName)) {
        std::cout << "Last name must start with a capital letter!" << std::endl;
        return;
    }

    if (!isOnlyDigits(phoneNumber)) {
        std::cout << "Phone number must contain only digits!" << std::endl;
        return;
    }

    contacts[next_index].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    next_index = (next_index + 1) % 8;
    if (total_contacts < 8)
        total_contacts++;

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts() const
{
    if (total_contacts == 0)
    {
        std::cout << "No contacts available!" << std::endl;
        return;
    }
         std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    int i = 0; 
    while (i < total_contacts)
    {
        contacts[i].displaySummary(i);
        i++;
    }

    std::cout << "Enter the index of the contact to view details: ";
    int index;
    
    if (!(std::cin >> index))
    { 
        std::cout << "Invalid input! Please enter a number." << std::endl;
        std::cin.clear();
        std::cin.ignore();
        return;
    }else{
        std::cin.ignore();
        if (index < 0 || index >= total_contacts)
            std::cout << "Invalid index!" << std::endl;
        else
            contacts[index].displayFull();
    }
   
}

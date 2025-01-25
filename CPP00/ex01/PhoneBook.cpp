#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : next_index(0), total_contacts(0) {}

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

    for (int i = 0; i < total_contacts; i++)
    {
        contacts[i].displaySummary(i);
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

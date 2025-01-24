#include "Contact.hpp"

void Contact::setContact(const std::string &firstName,const std::string &lastName,const std::string &nickName,const std::string &phoneNumber,const std::string &darkestSecret)
{
        first_name = firstName;
        last_name = lastName;
        nickname = nickName;
        phone_number = phoneNumber;
        darkest_secret = darkestSecret;
}

void Contact::displaySummary(int index) const
{
             std::cout << std::setw(10) << index << "|"
              << std::setw(10) << truncate(first_name) << "|"
              << std::setw(10) << truncate(last_name) << "|"
              << std::setw(10) << truncate(nickname) << "|" << std::endl;
}

void Contact:: displayFull() const 
{
     std::cout << "First Name: " << first_name << std::endl;
        std::cout << "Last Name: " << last_name << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phone_number << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

std::string Contact::truncate(const std::string &str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
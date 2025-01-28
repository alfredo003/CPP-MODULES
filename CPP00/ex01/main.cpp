#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "+----------- PHONE BOOK ------------+"<< std::endl;
        std::cout << "Enter a command [ADD, SEARCH, EXIT]: ";
        if (!std::getline(std::cin, command)) {
            std::cout << "\n" << std::endl;
            break;
        }

        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContacts();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }

    return 0;
}

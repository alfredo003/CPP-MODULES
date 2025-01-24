#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int next_index;
        int total_contacts;

    public:
        PhoneBook();
        void addContact();
        void searchContacts() const;
};

#endif

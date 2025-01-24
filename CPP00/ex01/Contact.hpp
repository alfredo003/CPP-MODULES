#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void setContact(const std::string &firstName,const std::string &lastName,const std::string &nickName,const std::string &phoneNumber,const std::string &darkestSecret);
        void displaySummary(int index) const;
        void displayFull() const;

    private:
        static std::string truncate(const std::string &str);
};

#endif
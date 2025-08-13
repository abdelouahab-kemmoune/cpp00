/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:48:44 by akemmoun          #+#    #+#             */
/*   Updated: 2025/08/11 19:48:46 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using std::string;

class Contact{
private:
    string FirstName;
    string LastName;
    string NickName;
    string PhoneNumber;
    string DarkestSecret;
    int Count = 0;
public:
    // encapsulation
    void setCount(int count) {
        Count = count;
    }
    int getCount() {
        return Count;
    }

    void setFirstName(string firstName) {
        FirstName = firstName;
    }
    string getFirstName() {
        return FirstName;
    }

    void setLastName(string lastName) {
        LastName = lastName;
    }
    string getLastName() {
        return LastName;
    }

    void setNickName(string nickName) {
        NickName = nickName;
    }
    string getNickName() {
        return NickName;
    }

    void setPhoneNumber(string phoneNumber) {
        PhoneNumber = phoneNumber;
    }
    string getPhoneNumber() {
        return PhoneNumber;
    }

    void setDarkestSecret(string darkestSecret) {
        DarkestSecret = darkestSecret;
    }
    string getDarkestSecret() {
        return DarkestSecret;
    }
};

class PhoneBook {
private:
    Contact Contacts[8];
    int Count = 0;
//ADD
public:
    void Add() {
        Contact c;
        string input;

        std::cout << "First name: ";
        std::getline(std::cin, input);
        while (input.empty()) {
            std::cout << "Can't be empty. Enter again: ";
            std::getline(std::cin, input);
        }
        c.setFirstName(input);


        std::cout << "Last name: ";
        std::getline(std::cin, input);
        while (input.empty()) {
            std::cout << "Can't be empty. Enter again: ";
            std::getline(std::cin, input);
        }
        c.setLastName(input);

        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        while (input.empty()) {
            std::cout << "Can't be empty. Enter again: ";
            std::getline(std::cin, input);
        }
        c.setNickName(input);

        std::cout << "Phone number: ";
        std::getline(std::cin, input);
        while (input.empty()) {
            std::cout << "Can't be empty. Enter again: ";
            std::getline(std::cin, input);
        }
        c.setPhoneNumber(input);

        std::cout << "Darkest secret: ";
        std::getline(std::cin,input);
        while (input.empty()) {
            std::cout << "Can't be empty. Enter again: ";
            std::getline(std::cin, input);
        }
        c.setDarkestSecret(input);

        Contacts[Count % 8] = c;
        Count++;
    }
//SEARCH
public:
    void Search() {
        int total = (Count < 8) ? Count : 8;
        std::cout << std::setw(10) << std::right << "Index" << "|"
                    << std::setw(10) << std::right << "First name" << "|"
                    << std::setw(10) << std::right << "Last name" << "|"
                    << std::setw(10) << std::right << "Nickname" << "|" << std::endl;

        for (int i = 0; i < total ; i++)
        {
            std::cout << std::setw(10) << std::right << i << "|";
            if (Contacts[i].getFirstName().length() > 9)
                std::cout << std::setw(10) << std::right << Contacts[i].getFirstName().substr(0, 9) + "." << "|";
            else
                std::cout << std::setw(10) << std::right << Contacts[i].getFirstName() << "|";
            if (Contacts[i].getLastName().length() > 9)
                std::cout << std::setw(10) << std::right << Contacts[i].getLastName().substr(0, 9) + "." << "|";
            else
                std::cout << std::setw(10) << std::right << Contacts[i].getLastName() << "|";
            if (Contacts[i].getNickName().length() > 9)
                std::cout << std::setw(10) << std::right << Contacts[i].getNickName().substr(0, 9) + "." << "|" << std::endl;
            else
                std::cout << std::setw(10) << std::right << Contacts[i].getNickName() << "|" << std::endl;
        }


        int index = 0;
        std::cout << "Enter the index: ";
        std::cin >> index;
        if (std::cin.fail())
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << std::endl;

        if (index <= 8)
        {
            if (index >= 0 && index < total) {
                std::cout << "First name: " << Contacts[index].getFirstName() << std::endl;
                std::cout << "Last name: " << Contacts[index].getLastName() << std::endl;
                std::cout << "Nickname: " << Contacts[index].getNickName() << std::endl;
                std::cout << "Phone number: " << Contacts[index].getPhoneNumber() << std::endl;
                std::cout << "Darkest secret: " << Contacts[index].getDarkestSecret() << std::endl;
            }
        }
    }
};

int main(int argc, char **argv)
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter the command(ADD or SEARCH or EXIT): ";
        std::getline(std::cin, command); // PROTECT END OF FILE

        if (command == "ADD") {
            phoneBook.Add();
        }
        else if (command == "SEARCH")
        {
            phoneBook.Search();
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "unknown command" << std::endl;
    }
}

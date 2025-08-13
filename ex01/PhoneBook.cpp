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

#include "PhoneBook.hpp"

    PhoneBook::PhoneBook() : Count(0) {
    }

    void Contact::setFirstName(string firstName) {
        FirstName = firstName;
    }
    string Contact::getFirstName() {
        return FirstName;
    }

    void Contact::setLastName(string lastName) {
        LastName = lastName;
    }
    string Contact::getLastName() {
        return LastName;
    }

    void Contact::setNickName(string nickName) {
        NickName = nickName;
    }
    string Contact::getNickName() {
        return NickName;
    }

    void Contact::setPhoneNumber(string phoneNumber) {
        PhoneNumber = phoneNumber;
    }
    string Contact::getPhoneNumber() {
        return PhoneNumber;
    }

    void Contact::setDarkestSecret(string darkestSecret) {
        DarkestSecret = darkestSecret;
    }
    string Contact::getDarkestSecret() {
        return DarkestSecret;
    }

//ADD
    void PhoneBook::Add() {
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
    void PhoneBook::Search() {
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
        if (std::cin.fail()) {
            std::cout << "Invalid input, try again!" << std::endl;
            std::cin.clear(); // clear error flags
            std::cin.ignore(1000, '\n'); // discard the invalid input
        }
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

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

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName) {
        FirstName = firstName;
    }
std::string Contact::getFirstName() {
        return FirstName;
    }

void Contact::setLastName(std::string lastName) {
        LastName = lastName;
    }
std::string Contact::getLastName() {
        return LastName;
    }

void Contact::setNickName(std::string nickName) {
        NickName = nickName;
    }
std::string Contact::getNickName() {
        return NickName;
    }

void Contact::setPhoneNumber(std::string phoneNumber) {
        PhoneNumber = phoneNumber;
    }
std::string Contact::getPhoneNumber() {
        return PhoneNumber;
    }

void Contact::setDarkestSecret(std::string darkestSecret) {
        DarkestSecret = darkestSecret;
    }
std::string Contact::getDarkestSecret() {
        return DarkestSecret;
    }

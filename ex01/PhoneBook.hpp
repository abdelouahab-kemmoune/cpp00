/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:00:34 by akemmoun          #+#    #+#             */
/*   Updated: 2025/08/11 20:00:36 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using std::string;

class Contact {
private:
    string FirstName;
    string LastName;
    string NickName;
    string PhoneNumber;
    string DarkestSecret;

public:
    void setFirstName(string firstName);
    string getFirstName();
    void setLastName(string lastName);
    string getLastName();
    void setNickName(string nickName);
    string getNickName();
    void setPhoneNumber(string phoneNumber);
    string getPhoneNumber();
    void setDarkestSecret(string darkestSecret);
    string getDarkestSecret();
};

class PhoneBook {
private:
    Contact Contacts[8];
    int Count;

public:
    PhoneBook();
    void Add();
    void Search();
};

# endif

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

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

class Contact {
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

public:
    void setFirstName(std::string firstName);
    std::string getFirstName();
    void setLastName(std::string lastName);
    std::string getLastName();
    void setNickName(std::string nickName);
    std::string getNickName();
    void setPhoneNumber(std::string phoneNumber);
    std::string getPhoneNumber();
    void setDarkestSecret(std::string darkestSecret);
    std::string getDarkestSecret();
};

# endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:54:01 by akemmoun          #+#    #+#             */
/*   Updated: 2025/08/13 18:54:03 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter the command(ADD or SEARCH or EXIT): ";
        if (!std::getline(std::cin, command))
        {
            std::cout << "\nExiting program.\n";
            break;
        }
        
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

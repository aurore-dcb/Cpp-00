/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:33:40 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/27 14:34:47 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main() {
    
    std::string input;
    PhoneBook   phonebook;

    do {
        std::cout << std::endl << "Please enter one of these commands : ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, input);

        if (input.compare("ADD") == 0) {
            phonebook.ft_add();
        }
        else if (input.compare("SEARCH") == 0) {
            phonebook.ft_search();
        }
        else if (input.compare("ADD") && input.compare("SEARCH") && input.compare("EXIT")) {
            std::cout << input << " is a bad input. Please try again." << std::endl;
        }
    }
    while (input.compare("EXIT") != 0);
    
    return (0);
}

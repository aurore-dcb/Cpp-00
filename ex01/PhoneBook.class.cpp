/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:48:44 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/27 14:47:42 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    
    std::cout << "Constructor PhoneBook called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void) {
    
    std::cout << "Destructor PhoneBook called" << std::endl;
    return;
}

void PhoneBook::ft_add() {
    
    int i = 0;
    std::string input;
    
    while (i < 8 && !(this->tab[i].first_name.empty()))
        i++;
    if (i >= 8)
    {
        i = 0;
        std::cout << "The oldest contact is about to be replaced." << std::endl;
        while (i < 8 && this->tab[i].oldest == false)
            i++;
        this->tab[i].oldest = false;
        if (i + 1 >= 8)
            this->tab[0].oldest = true;
        else
            this->tab[i + 1].oldest = true;
    }
    else if (i == 0)
        this->tab[i].oldest = true;
    do {
        std::cout << "/!\\ Do not let a field empty : " << std::endl;
        std::cout << "First name : ";
        std::getline(std::cin, this->tab[i].first_name);
        std::cout << "Last name : ";
        std::getline(std::cin, this->tab[i].last_name);
        std::cout << "Nickname : ";
        std::getline(std::cin, this->tab[i].nickname);
        std::cout << "Phone number : ";
        std::getline(std::cin, this->tab[i].phone_number);
        std::cout << "Darkest secret : ";
        std::getline(std::cin, this->tab[i].darkest_secret);
    }
    while (this->tab[i].first_name.empty() || this->tab[i].last_name.empty() || this->tab[i].nickname.empty() || this->tab[i].phone_number.empty() || this->tab[i].darkest_secret.empty());
}

void PhoneBook::ft_search(void) {
    
    std::string index;
    
    std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First Name" << " | ";
    std::cout << std::setw(10) << "Last Name" << " | " << std::setw(10) << "Nickname " << " | " << std::endl;
    for (int i = 0 ; i < 8 ; i++) {
        
        std::cout << std::setw(10) << i << " | ";
        if (this->tab[i].first_name.length() >= 11)
            std::cout << std::setw(10) << this->tab[i].first_name.substr(0, 9) + "." << " | ";
        else
            std::cout << std::setw(10) << this->tab[i].first_name << " | ";
        if (this->tab[i].last_name.length() >= 11)
            std::cout << std::setw(10) << this->tab[i].last_name.substr(0, 9) + "." << " | ";
        else
            std::cout << std::setw(10) << this->tab[i].last_name << " | ";
        if (this->tab[i].nickname.length() >= 11)
            std::cout << std::right << std::setw(10) << this->tab[i].nickname.substr(0, 9) + "." << " | " << std::endl;
        else
            std::cout << std::right << std::setw(10) << this->tab[i].nickname << " | " << std::endl;
    }
    std::cout << "Which one do you want to see ? Please enter its index : ";
    std::getline(std::cin, index);
    while ((index.length() != 1 || index[0] > '7' || index[0] < '0') || this->tab[index[0] - '0'].first_name.empty()) {
        
        if (index.length() == 1 && this->tab[index[0] - '0'].first_name.empty() && !(index[0] > '7' || index[0] < '0'))
            std::cout << "You an empty index. Please try again" << std::endl;
        else
            std::cout << "You entered a bad index. Please try again" << std::endl;
        std::getline(std::cin, index);
    }
    std::cout << "---- Contact n*" << index[0] << " ----" << std::endl;
    std::cout << "First name : " << this->tab[index[0] - '0'].first_name << std::endl;
    std::cout << "Last name : " << this->tab[index[0] - '0'].last_name << std::endl;
    std::cout << "Nickname : " << this->tab[index[0] - '0'].nickname << std::endl;
    std::cout << "Phone number : " << this->tab[index[0] - '0'].phone_number << std::endl;
    std::cout << "Darkest secret : " << this->tab[index[0] - '0'].darkest_secret << std::endl;
}
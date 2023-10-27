/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:53:34 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/27 11:40:27 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    
    std::cout << "Constructor Contact called" << std::endl;
    this->oldest = false;
    // this->first_name = NULL;
    // this->last_name = NULL;
    // this->nickname = NULL;
    return;
}

Contact::~Contact(void) {
    
    std::cout << "Destructor Contact called" << std::endl;
    return;
}

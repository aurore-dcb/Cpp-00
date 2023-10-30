/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:53:34 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/30 12:37:15 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    
    std::cout << "Constructor Contact called" << std::endl;
    this->oldest = false;
    return;
}

Contact::~Contact(void) {
    
    std::cout << "Destructor Contact called" << std::endl;
    return;
}

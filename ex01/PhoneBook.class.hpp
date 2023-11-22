/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:35:29 by aducobu           #+#    #+#             */
/*   Updated: 2023/11/22 15:44:01 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
    
    public :
      
      PhoneBook(void);
      ~PhoneBook(void);
    
      void add();
      void search();
      
    private :
    
      Contact tab[8];
      void FillContact(Contact tab[], int i);
      void DisplayContact(std::string index, Contact tab[]);
    
};

#endif
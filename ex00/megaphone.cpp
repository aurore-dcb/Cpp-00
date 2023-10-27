/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:03:28 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/27 09:26:14 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    char maj;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1 ; i < argc ; i++) {
            for (int j = 0; argv[i][j] ; j++) {
                maj = std::toupper(argv[i][j]);
                std::cout << maj;
            }
        }
    }
    std::cout << std::endl;
    return (0);
}

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:28:33 by aducobu           #+#    #+#              #
#    Updated: 2023/11/22 15:43:11 by aducobu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MyAwesomePhoneBook

SRC		= PhoneBook.class.cpp Contact.class.cpp main.cpp

OBJ		= $(SRC:.cpp=.o)

FLAGS 	= -Wall -Wextra -Werror -std=c++98
CC		= c++

RM		= rm -rf

$(NAME):	$(OBJ) *.hpp
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
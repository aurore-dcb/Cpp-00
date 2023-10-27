# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 13:03:30 by aducobu           #+#    #+#              #
#    Updated: 2023/10/27 09:27:12 by aducobu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp

OBJ		= ${SRC:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= c++

RM		= rm -f

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	
all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
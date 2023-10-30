# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:38:25 by aducobu           #+#    #+#              #
#    Updated: 2023/10/30 14:15:45 by aducobu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= TheJobOfYourDream

SRC 	= Account.cpp main.cpp #tests.cpp
OBJ 	= $(SRC:.cpp=.o)

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ);

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
		
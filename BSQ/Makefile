#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/27 14:03:29 by sgaudin           #+#    #+#              #
#    Updated: 2015/08/27 16:27:41 by sgaudin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= bsq
CC		= gcc -Wall -Werror -Wextra
SRCS	= main.c bsq.c get_grid.c  basic_functions.c check_grid.c 

all: $(NAME)

$(NAME):
	 $(CC) $(SRCS) -o $(NAME) -I .

fclean:
	rm -f $(NAME)

re: fclean all
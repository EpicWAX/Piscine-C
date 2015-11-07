# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 02:00:45 by qhusler           #+#    #+#              #
#    Updated: 2015/11/06 14:29:36 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = ft_tail.c
OBJ = ft_tail.o
HDR = -I j12.h
RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAG) $(SRC) $(HDR)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

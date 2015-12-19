# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 02:00:45 by qhusler           #+#    #+#              #
#    Updated: 2015/12/03 23:37:48 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = main.c \
	  column.c \
	  print_str.c \
	  putnbr_base.c \
	  ll.c \
	  prlanorm.c
OBJ = main.o \
	  column.o \
	  print_str.o \
	  putnbr_base.o \
	  ll.o \
	  prlanorm.o
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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/31 19:37:32 by qhusler           #+#    #+#              #
#    Updated: 2015/11/01 14:52:59 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -f
CC = gcc
AR = ar rc
RL = ranlib
HDR = -I includes/
CFLG = -Wall -Werror -Wextra -c
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_swap.c
OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strlen.o \
	  ft_strcmp.o \
	  ft_swap.o

all: $(NAME)

$(NAME):
	@$(CC) $(CFLG) $(SRC) $(HDR)
	@$(AR) $(NAME) $(OBJ)
	@$(RL) $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

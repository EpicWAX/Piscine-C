# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 14:25:42 by qhusler           #+#    #+#              #
#    Updated: 2015/11/03 04:07:58 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
RM = rm -f
CC = gcc 
CFLG = -c -Wall -Werror -Wextra
HDR = -I includes/
SRC = srcs/print.c srcs/ft_do_op.c srcs/main.c
OBJ = print.o ft_do_op.o main.o

all: $(NAME)

$(NAME):
	@$(CC) $(CFLG) $(SRC) $(HDR)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

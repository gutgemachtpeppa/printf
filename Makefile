# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahalfrun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 15:44:36 by ahalfrun          #+#    #+#              #
#    Updated: 2022/01/06 16:00:46 by ahalfrun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRC = ft_allchecks.c\
	  ft_len_check.c\
	  ft_printf.c\
	  ft_hexes.c\
	  ft_lib.c

OBJ = $(SRC:.c=.o)

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

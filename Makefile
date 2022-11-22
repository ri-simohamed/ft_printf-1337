# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrami <mrami@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 18:34:36 by mrami             #+#    #+#              #
#    Updated: 2022/11/22 18:34:37 by mrami            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = cc
Cflags = -Wall -Wextra -Werror
Cfiles = ft_printf.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_put_hexad.c \
	   ft_putdcml.c \
	   ft_put_hexadecimal_upp.c \
	   ft_put_hexadecimal_low.c \
	   ft_putstr.c

OBJS = $(Cfiles:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(cc) $(Cflags) -c $<

clean :
	rm -rf $(OBJS)

fclean :	clean
	rm -rf	$(NAME)

re:	fclean all


.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrami <mrami@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 12:20:39 by mrami             #+#    #+#              #
#    Updated: 2022/11/23 14:17:38 by mrami            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = cc
Cflags = -Wall -Wextra -Werror
Cfiles = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_put_hexa_add.c \
		ft_put_nusignd_numb.c \
		ft_put_hexad_low.c \
		ft_put_hexad_upp.c \
		
Objcs = $(Cfiles:.c=.o)
all : $(NAME)

$(NAME): $(Objcs)
	ar -rc $(NAME) $(Objcs)

%.o: %.c ft_printf.h
	$(cc) $(Cflags) -c $<

clean:
	rm -rf $(Objcs)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
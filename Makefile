NAME = libftprintf.a
cc = cc
Cflags = -Wall -Wextra -Werror
Cfiles = ft_printf.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putpntr.c \
	   ft_putdcml.c \
	   ft_puthdmlup.c \
	   ft_puthdmllow.c \
	   ft_putstr.c

OBJS = $(Cfiles:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(cc) $(Cflags) -c $<  -o $@

clean :
	rm -rf $(OBJS)

fclean :	clean
	rm -rf	$(NAME)

re:	fclean all


.PHONY: all clean fclean re

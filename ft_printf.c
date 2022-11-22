/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:36:05 by mrami             #+#    #+#             */
/*   Updated: 2022/11/22 18:55:33 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	printformlen;

	printformlen = 0;
	if (format == 'c')
		printformlen += ft_putchar(va_arg(args, int));
	else if (format == 's')
		printformlen += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		printformlen += ft_putstr("0x");
		printformlen += ft_put_hexad(va_arg(args, unsigned long int));
	}
	else if (format == 'x')
		printformlen += ft_put_hexadecimal_low(va_arg(args, unsigned int));
	else if (format == 'd' || format == 'i')
		printformlen += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		printformlen += ft_putdcml(va_arg(args, unsigned int));
	else if (format == 'X')
		printformlen += ft_put_hexadecimal_upp(va_arg(args, unsigned int));
	else if (format == '%')
		printformlen += ft_putchar('%');
	return (printformlen);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		printlenfprm;

	i = 0;
	printlenfprm = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			printlenfprm += ft_format(args, s[i]);
		}
		else
		{
			printlenfprm += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(args);
	return (printlenfprm);
}

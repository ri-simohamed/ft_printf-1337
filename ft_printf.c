/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:15:10 by mrami             #+#    #+#             */
/*   Updated: 2022/11/21 00:09:42 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	lenprint;

	lenprint = 0;
	if (format == 'c')
		lenprint += ft_putchar(va_arg(args, int));
	else if (format == 's')
		lenprint += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		lenprint += ft_putstr("0x");
		lenprint += ft_putpntr(va_arg(args, unsigned long int));
	}
	else if (format == 'x')
		lenprint += ft_puthdmllow(va_arg(args, unsigned int));
	else if (format == 'd' || format == 'i')
		lenprint += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		lenprint += ft_putdcml(va_arg(args, unsigned int));
	else if (format == 'X')
		lenprint += ft_puthdmlup(va_arg(args, unsigned int));
	else if (format == '%')
		lenprint += ft_putchar('%');
	
	return (lenprint);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		lenprint;

	i = 0;
	lenprint = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			lenprint += ft_format(args, str[i]);
			
		}
		else
		{
			lenprint += ft_putchar(str[i]);
		
		}i++;
	}
	va_end(args);
	return (lenprint);
}

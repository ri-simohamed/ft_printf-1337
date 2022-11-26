/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:01:39 by mrami             #+#    #+#             */
/*   Updated: 2022/11/25 20:53:10 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_printf_forma(va_list ap, const char form)
{
	int	print_len_form;

	print_len_form = 0;
	if (form == 'c')
		print_len_form += ft_putchar(va_arg(ap, int));
	else if (form == 's')
		print_len_form += ft_putstr(va_arg(ap, char *));
	else if (form == 'd' || form == 'i')
		print_len_form += ft_putnbr(va_arg(ap, int));
	else if (form == 'p')
	{
		print_len_form += ft_putstr("0x");
		print_len_form += ft_put_hexa_add(va_arg(ap, unsigned long long));
	}
	else if (form == 'u')
		print_len_form += ft_put_nusignd_numb(va_arg(ap, unsigned int));
	else if (form == 'x')
		print_len_form += ft_put_hexad_low(va_arg(ap, unsigned int));
	else if (form == 'X')
		print_len_form += ft_put_hexad_upp(va_arg(ap, unsigned int));
	else if (form == '%')
		print_len_form += ft_putchar('%');
	return (print_len_form);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	list;
	int		len_print;

	i = 0;
	len_print = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%' && !s[i + 1])
			break ;
		else if (s[i] == '%')
		{
			i++;
			len_print += ft_printf_forma(list, s[i]);
		}
		else
		{
			len_print += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(list);
	return (len_print);
}

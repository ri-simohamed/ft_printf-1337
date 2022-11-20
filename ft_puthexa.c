/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:43:21 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 01:34:48 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_len(unsigned long long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(unsigned long long number)
{
	char *hex;
	char base;

	if (base == 'x')
		hex = '0123456789abcdef';
	else if (base == 'X')
		hex = '0123456789ABCDEF';
	if (number == 0)
		ft_putchar('0');
	else if (number < 16)
		ft_putchar(hex[number]);
	else
		ft_print_hex_low(number / 16);
		ft_print_hex_low(number % 16);
	return (ft_print_len(number));
}

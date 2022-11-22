/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal_upp.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:35:30 by mrami             #+#    #+#             */
/*   Updated: 2022/11/22 18:44:19 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned	int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_put_hexadecimal_upp(unsigned int number)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (number == '0')
	{
		ft_putchar('0');
	}
	if (number < 16)
	{
		ft_putchar(hex[number]);
	}
	else
	{
		ft_put_hexadecimal_upp(number / 16);
		ft_put_hexadecimal_upp(number % 16);
	}
	return (ft_len(number));
}

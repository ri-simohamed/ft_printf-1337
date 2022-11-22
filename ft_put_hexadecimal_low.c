/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal_low.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:35:42 by mrami             #+#    #+#             */
/*   Updated: 2022/11/22 18:43:32 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
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

int	ft_put_hexadecimal_low(unsigned int number)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number < 16)
	{
		ft_putchar(hex[number]);
	}
	else
	{
		ft_put_hexadecimal_low(number / 16);
		ft_put_hexadecimal_low(number % 16);
	}
	return (ft_len(number));
}

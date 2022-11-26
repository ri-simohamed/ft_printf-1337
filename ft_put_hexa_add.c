/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:51:56 by mrami             #+#    #+#             */
/*   Updated: 2022/11/23 14:40:19 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_print_len(unsigned long long num)
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

int	ft_put_hexa_add(unsigned long long number)
{
	char	*hexadcimal;

	hexadcimal = "0123456789abcdef";
	if (number < 16)
		ft_putchar(hexadcimal[number]);
	else
	{
		ft_put_hexa_add(number / 16);
		ft_put_hexa_add(number % 16);
	}
	return (ft_print_len(number));
}

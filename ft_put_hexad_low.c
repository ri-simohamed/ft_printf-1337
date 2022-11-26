/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexad_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:02:09 by mrami             #+#    #+#             */
/*   Updated: 2022/11/24 17:11:13 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_print_len_low(unsigned int num)
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

int	ft_put_hexad_low(unsigned int number)
{
	char	*hexad_low;

	hexad_low = "0123456789abcdef";
	if (number < 16)
	{
		ft_putchar(hexad_low[number]);
	}
	else
	{
		ft_put_hexad_low(number / 16);
		ft_put_hexad_low(number % 16);
	}
	return (ft_print_len_low(number));
}

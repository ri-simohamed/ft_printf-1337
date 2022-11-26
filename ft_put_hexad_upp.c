/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexad_upp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:11:27 by mrami             #+#    #+#             */
/*   Updated: 2022/11/23 14:40:40 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_print_len_upp(unsigned int num)
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

int	ft_put_hexad_upp(unsigned int number)
{
	char	*hexad_upp;

	hexad_upp = "0123456789ABCDEF";
	if (number < 16)
	{
		ft_putchar(hexad_upp[number]);
	}
	else
	{
		ft_put_hexad_upp(number / 16);
		ft_put_hexad_upp(number % 16);
	}
	return (ft_print_len_upp(number));
}

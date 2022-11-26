/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nusignd_numb.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:16:11 by mrami             #+#    #+#             */
/*   Updated: 2022/11/23 14:40:52 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_print_len_num(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	ft_put_nusignd_numb(unsigned int number)
{
	char	*decimal;

	decimal = "0123456789";
	if (number < 10)
		ft_putchar(decimal[number]);
	else
	{
		ft_put_nusignd_numb(number / 10);
		ft_put_nusignd_numb(number % 10);
	}
	return (ft_print_len_num(number));
}

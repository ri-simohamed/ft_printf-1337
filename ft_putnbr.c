/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:21:30 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 23:21:33 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(int num)
{
	 int	len;

	len = 0;
	if (num == 0)
		return 1;
	if (num < 0)
	{
		len++;
		num = num * (-1);
	}
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
int	ft_putnbr(int number)
{
	long int	n;

	n = number;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	return (ft_len(number));
}

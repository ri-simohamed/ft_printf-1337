/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:27:12 by mrami             #+#    #+#             */
/*   Updated: 2022/11/23 14:41:09 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_printfcount_num(int num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		counter = counter + 1;
	while (num != 0)
	{
		counter++;
		num = num / 10;
	}
	return (counter);
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
	return (ft_printfcount_num(number));
}

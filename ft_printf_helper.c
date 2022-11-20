/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:44:10 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 01:27:11 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
    write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num= num * (-1);
	}
	if (num < 10)
	{
		ft_putchar(num + '0');
	}
	else
	{
		ft_putnbr(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

int	ft_putstr(char *s)
{
	int i;
	
	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_unsi_dec(unsigned int dec)
{
	if (dec < 10)
		ft_putchar(dec + '0');
	else
		ft_print_unsi_dec(dec / 10 + '0');
		ft_print_unsi_dec(dec % 10 + '0');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:44:10 by mrami             #+#    #+#             */
/*   Updated: 2022/11/19 16:04:12 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
    write(1, &c, 1);
}

int	ft_putnbr(int num)
{
	long int n;

	n = num;
	if (n < 0)
	{
		ft_putchar('-');
		n= n * (-1);
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putstr(char *s)
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
}

void	ft_print_address(unsigned int c, const char s)
{
	
}
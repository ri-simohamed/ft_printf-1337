/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpntr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:21:36 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 23:21:42 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned	long long num)
{
	int	len;

    len = 0;
	if (num == 0)
		return 1;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
int ft_putpntr(unsigned long long ptr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (ptr == '0')
	{
		ft_putchar('0');
	}
	if (ptr < 16)
	{
		ft_putchar(hex[ptr]);
	}
	else
	{
		ft_putpntr(ptr / 16);
		ft_putpntr(ptr % 16);
	}
	return (ft_len(ptr));
}

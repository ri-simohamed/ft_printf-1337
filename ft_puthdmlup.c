/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthdmlup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:21:20 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 23:21:26 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned	int num)
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
int	ft_puthdmlup(unsigned int hdml)
{
	char *hex;

	hex = "0123456789ABCDEF";
	if (hdml == '0')
	{
		ft_putchar('0');
	}
	if (hdml < 16)
	{
		ft_putchar(hex[hdml]);
	}
	else
	{
		ft_puthdmlup(hdml / 16);
		ft_puthdmlup(hdml % 16);
	}
	return (ft_len(hdml));
}

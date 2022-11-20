/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdcml.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:20:51 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 23:20:57 by mrami            ###   ########.fr       */
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
		num = num / 10;
	}
	return (len);
}
int	ft_putdcml(unsigned int num)
{
	char *dml;

	dml = "0123456789";
	if (num == '0')
	{
		ft_putchar('0');
	}
	if (num < 10)
	{
		ft_putchar(dml[num]);
	}
	else
	{
		ft_putdcml(num / 10);
		ft_putdcml(num % 10);
	}
	return (ft_len(num));
}

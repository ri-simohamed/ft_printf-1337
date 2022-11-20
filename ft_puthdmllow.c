/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthdmllow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:20:41 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 23:20:46 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
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
int	ft_puthdmllow(unsigned int hdml)
{
	char *hex;

	hex = "0123456789abcdef";
	if (hdml < 16)
	{
		ft_putchar(hex[hdml]);
	}
	else
	{
		ft_puthdmllow(hdml / 16);
		ft_puthdmllow(hdml % 16);
	}
	return (ft_len(hdml));
}

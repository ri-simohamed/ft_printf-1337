/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexad.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:35:49 by mrami             #+#    #+#             */
/*   Updated: 2022/11/22 18:42:26 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned	long long num)
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

int	ft_put_hexad(unsigned long long ptr)
{
	char	*hex;

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
		ft_put_hexad(ptr / 16);
		ft_put_hexad(ptr % 16);
	}
	return (ft_len(ptr));
}

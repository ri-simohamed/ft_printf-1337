/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:30:29 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 02:40:10 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_format(va_list args, char *form)
{
    int printformt;

    if (form == 'c')
        printformt += ft_putchar(va_arg(args, int));
    if (form == 's')
        printformt += ft_putstr(va_arg(args, char *));
    if (form == 'p')
        printformt += ft_putstr("0x");
        printformt += ft_print_hex(va_arg(args, unsigned long long));
    if (form == 'i' || form == 'd')
        printformt += ft_putnbr(va_arg(args, int));
    if (form == 'u')
        printformt += ft_print_unsi_dec(va_arg(args, unsigned int));
    if (form =='x')
        printformt += ft_print_hex(va_arg(args, unsigned long long));
    if (form == 'X')
        printformt += ft_print_hex(va_arg(args, unsigned long long));
}
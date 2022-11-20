/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:31:48 by mrami             #+#    #+#             */
/*   Updated: 2022/11/20 01:32:13 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putnbr(int num);
int	ft_putstr(char *s);
int	ft_print_hex(unsigned long long number)
int	ft_print_unsi_dec(unsigned int dec);

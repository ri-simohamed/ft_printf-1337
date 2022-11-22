/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:30:28 by mrami             #+#    #+#             */
/*   Updated: 2022/11/22 18:38:15 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int nu);
int	ft_put_hexad(unsigned long long ptr);
int	ft_put_hexadecimal_upp(unsigned int number);
int	ft_put_hexadecimal_low(unsigned int number);
int	ft_putdcml(unsigned int num);

#endif
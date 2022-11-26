/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:17:02 by mrami             #+#    #+#             */
/*   Updated: 2022/11/23 14:37:11 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int number);
int	ft_put_hexa_add(unsigned long long number);
int	ft_put_nusignd_numb(unsigned int number);
int	ft_put_hexad_low(unsigned int number);
int	ft_put_hexad_upp(unsigned int number);

#endif

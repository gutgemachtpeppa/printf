/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalfrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:32:54 by ahalfrun          #+#    #+#             */
/*   Updated: 2022/01/06 15:42:00 by ahalfrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
unsigned int	ft_un_putnbr(unsigned int n);
unsigned int	ft_hex_putnbr(unsigned int n);
unsigned int	ft_hex_putnbr_up(unsigned int n);
unsigned long	ft_hex_putptr(unsigned long n);
int				ft_nbr_len(int n);
unsigned int	ft_un_nbr_len(unsigned int n);
unsigned int	ft_hex_nbr_len(unsigned int n);
int				ft_check(char ch, va_list ap);

#endif

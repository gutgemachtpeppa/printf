/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allchecks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalfrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:11 by ahalfrun          #+#    #+#             */
/*   Updated: 2022/01/06 16:35:09 by ahalfrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char ch, va_list ap)
{
	if (ch == 'c')
		return (ft_putchar((char)(va_arg(ap, int))));
	else if (ch == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (ch == 'p')
	{
		write(1, "0x", 2);
		return (ft_hex_putptr(va_arg(ap, unsigned long)));
	}
	else if (ch == 'd' || ch == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (ch == 'u')
		return (ft_un_putnbr(va_arg(ap, unsigned int)));
	else if (ch == 'x')
		return (ft_hex_putnbr(va_arg(ap, unsigned int)));
	else if (ch == 'X')
		return (ft_hex_putnbr_up(va_arg(ap, unsigned int)));
	else if (ch == '%')
		return (ft_putchar('%'));
	return (0);
}

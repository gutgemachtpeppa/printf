/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalfrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:16:58 by ahalfrun          #+#    #+#             */
/*   Updated: 2022/01/06 16:36:08 by ahalfrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = ft_nbr_len(n);
	if (n == -2147483648)
	{
		n = 147483648;
		ft_putstr("-2");
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (i);
}

unsigned int	ft_un_putnbr(unsigned int n)
{
	int	i;

	i = ft_un_nbr_len(n);
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_un_putnbr(n / 10);
		ft_un_putnbr(n % 10);
	}
	return (i);
}

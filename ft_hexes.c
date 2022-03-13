/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalfrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:37:40 by ahalfrun          #+#    #+#             */
/*   Updated: 2022/01/06 15:23:20 by ahalfrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_hex_str_len(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i + 2);
}

unsigned int	ft_hex_nbr_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

unsigned long	ft_hex_putptr(unsigned long n)
{
	int	i;

	i = ft_hex_str_len(n);
	if (n >= 16)
	{
		ft_hex_putptr(n / 16);
		ft_hex_putptr(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}

unsigned int	ft_hex_putnbr(unsigned int n)
{
	int	i;

	i = ft_hex_nbr_len(n);
	if (n >= 16)
	{
		ft_hex_putnbr(n / 16);
		ft_hex_putnbr(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}

unsigned int	ft_hex_putnbr_up(unsigned int n)
{
	int	i;

	i = ft_hex_nbr_len(n);
	if (n >= 16)
	{
		ft_hex_putnbr_up(n / 16);
		ft_hex_putnbr_up(n % 16);
	}
	else
		ft_putchar("0123456789ABCDEF"[n % 16]);
	return (i);
}

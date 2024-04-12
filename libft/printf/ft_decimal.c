/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:45:19 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 11:32:49 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

static int	ft_counter(long int n)
{
	int	x;

	x = 1;
	while (n >= 10)
	{
		x++;
		n /= 10;
	}
	return (x);
}

int	ft_decimal(int nb)
{
	long int	x;

	x = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_counter(nb));
	x = (long int)nb * (-1);
	return (ft_counter(x) + 1);
}

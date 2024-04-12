/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:46:06 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 12:35:23 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long long nb, char c)
{
	unsigned long long	count;

	count = 0;
	if (nb >= 16)
		count += ft_hexa(nb / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[nb % 16]);
	else if (c == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
	count++;
	return (count);
}

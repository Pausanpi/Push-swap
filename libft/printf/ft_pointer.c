/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:46:30 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 10:56:44 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long ptr)
{
	int	x;

	x = 0;
	x += ft_string("0x");
	x += ft_hexa(ptr, 'x');
	return (x);
}

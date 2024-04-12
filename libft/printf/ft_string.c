/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:32:26 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 11:08:01 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *s)
{
	int	x;

	x = 0;
	if (!s)
		return (ft_string("(null)"));
	while (s[x])
	{
		ft_putchar(s[x]);
		x++;
	}
	return (x);
}

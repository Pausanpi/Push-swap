/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:07:23 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/20 09:03:38 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	tmp;

	tmp = 0;
	while (tmp < n)
	{
		if (s1[tmp] != s2[tmp] || s1[tmp] == '\0' || s2[tmp] == '\0')
			return ((unsigned char)s1[tmp] - (unsigned char)s2[tmp]);
		tmp++;
	}
	return (0);
}

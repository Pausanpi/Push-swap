/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:10:08 by pausanch          #+#    #+#             */
/*   Updated: 2023/11/06 11:46:45 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_challoc(size_t count)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(count);
	if (tmp == 0)
		return (0);
	while (i < count)
		tmp[i++] = '\0';
	return (tmp);
}

bool	ft_nlsrch(char *str)
{
	if (!str)
		return (false);
	while (*str != 0)
	{
		if (*str == '\n')
			return (true);
		str++;
	}
	return (false);
}

size_t	gnl_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

char	*gnl_strjoin(char *s1, char const *s2)
{
	char	*str;
	size_t	x;
	size_t	y;

	str = malloc(sizeof(char) * ((size_t)gnl_strlen(s1) + gnl_strlen(s2) + 1));
	if (!str)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (free(s1), str);
}

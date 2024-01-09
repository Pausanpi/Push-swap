/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:34:30 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/21 17:58:47 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	tmplen;

	if (!needle[0])
		return ((char *) haystack);
	while (*haystack && len)
	{
		j = 0;
		tmplen = len;
		while (tmplen && haystack[j] && haystack[j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char *) haystack);
			j++;
			tmplen--;
			if (tmplen == 0)
				return (NULL);
		}
		len--;
		haystack++;
	}
	return (NULL);
}

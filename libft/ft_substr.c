/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:35:35 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/21 16:01:04 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	l = ft_strlen(s);
	if (!s)
		return (NULL);
	if (l < start)
		return (ft_strdup(""));
	if (l < start + len)
		len = l - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
/*
int main()
{
	char cadena[] = "mazorquito";

	printf("%s\n", ft_substr(cadena, 3, 4));
	return (0);
}
*/
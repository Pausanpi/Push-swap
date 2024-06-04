/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:43:37 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/15 18:04:51 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static bool	ft_check_duplicates(char **argv)
{
	char	**current;
	char	**compare;

	current = argv + 1;
	while (*current != NULL)
	{
		compare = argv;
		while (compare < current)
		{
			if (ft_strncmp(*current, *compare, ft_strlen(*current) + 1) == 0)
			)
				return (false);
			compare++;
		}
		current++;
	}
	return (true);
}

static bool	ft_check_correct_digits(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		if (argv[i][j] == '-')
		{
			j++;
			if (argv[i][j] == '-' || argv[i][j] == '+')
				return (false);
		}
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
				return (false);
			j++;
		}
		if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
			return (false);
		i++;
	}
	return (true);
}

void	ft_check_condits(char *argv[])
{
	if (ft_check_duplicates(argv) == false)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (ft_check_correct_digits((argv)) == false)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

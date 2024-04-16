/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:45:11 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/16 12:52:47 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*ft_stacklast(t_stack *stack)
{
	t_stack	*current;

	if (!stack)
		return (0);
	current = stack;
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}

int	ft_stacksize(t_stack *stack)
{
	int		cont;
	t_stack	*tmp;

	if (!stack)
		return (0);
	cont = 1;
	tmp = stack;
	while (tmp->next)
	{
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}

void	ft_stackadd_last(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (*stack == NULL)
		*stack = new;
	else
	{
		tmp = ft_stacklast(*stack);
		tmp->next = new;
	}
}

bool	ft_correct_orden(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (!tmp)
		return (true);
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

void	ft_free_str(char **str)
{
	int	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

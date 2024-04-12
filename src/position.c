/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:18:05 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/12 16:05:05 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_put_position(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 1;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_put_index(t_stack **stack)
{
	t_stack	*current;
	t_stack	*cmp;

	current = *stack;
	while (current)
	{
		cmp = *stack;
		current->index = 1;
		while (cmp)
		{
			if (cmp->value < current->value)
				current->index++;
			cmp = cmp->next;
		}
		current = current->next;
	}
}

t_stack	*ft_max_index(t_stack **stack_a)
{
	t_stack	*copy;
	t_stack	*max_index;

	copy = *stack_a;
	max_index = *stack_a;
	while (copy)
	{
		if (copy->value > max_index->value)
			max_index = copy;
		copy = copy->next;
	}
	return (max_index);
}

t_stack	*ft_min_index(t_stack **stack_a)
{
	t_stack	*copy;
	t_stack	*min_index;

	copy = *stack_a;
	min_index = *stack_a;
	while (copy)
	{
		if (copy->value < min_index->value)
			min_index = copy;
		copy = copy->next;
	}
	return (min_index);
}

void	ft_calculate_target(t_stack *tmpa, t_stack *tmpb, int *rest)
{
	while (tmpa)
	{
		if (tmpb->index < tmpa->index)
		{
			if (tmpa->index - tmpb->index <= *rest)
			{
				*rest = tmpa->index - tmpb->index;
				tmpb->target = tmpa->pos;
			}
		}
		tmpa = tmpa->next;
	}
}

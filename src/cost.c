/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:48:55 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/15 18:04:19 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_check_par(int size)
{
	int	aux;

	if (size % 2 == 0)
		aux = size / 2;
	else
		aux = (size / 2) + 1;
	return (aux);
}

static int	ft_abs_value(int values)
{
	if (values < 0)
		return (values * -1);
	return (values);
}

t_stack	*ft_calculate_cheapest(t_stack **stack_b)
{
	t_stack	*copy;
	t_stack	*cheapest;

	copy = *stack_b;
	cheapest = copy;
	while (copy)
	{
		if (ft_abs_value(copy->cost_a) + ft_abs_value(copy->cost_b)
			< ft_abs_value(cheapest->cost_a) + ft_abs_value(cheapest->cost_b))
			cheapest = copy;
		copy = copy->next;
	}
	return (cheapest);
}

void	ft_calculate_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*copy_b;
	int		size_a;
	int		size_b;
	int		aux_a;
	int		aux_b;

	copy_b = *stack_b;
	size_a = ft_stacksize(*stack_a);
	size_b = ft_stacksize(*stack_b);
	aux_a = ft_check_par(size_a);
	aux_b = ft_check_par(size_b);
	while (copy_b)
	{
		copy_b->cost_b = copy_b->pos - 1;
		if (copy_b->pos > aux_b)
			copy_b->cost_b = (size_b - copy_b->pos + 1) * -1;
		copy_b->cost_a = copy_b->target - 1;
		if (copy_b->target > aux_a)
			copy_b->cost_a = (size_a - copy_b->target + 1) * -1;
		copy_b = copy_b->next;
	}
}

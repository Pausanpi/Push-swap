/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:16:13 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/15 17:04:48 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_first_step(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	i;
	int	push;

	size = ft_stacksize(*stack_a);
	i = 0;
	push = 0;
	while (size > 6 && i < size && push < size / 2)
	{
		if ((*stack_a)->index < size / 2)
		{
			ft_pb(stack_b, stack_a, 1);
			push++;
		}
		else
			ft_ra(stack_a, 1);
		i++;
	}
	while (size - push > 3)
	{
		ft_pb(stack_b, stack_a, 1);
		push++;
	}
}

void	ft_second_step(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*middle;
	t_stack	*last;

	first = *stack_a;
	middle = first->next;
	last = middle->next;
	if (first->value > middle->value && first->value > last->value)
	{
		ft_ra(stack_a, 1);
		ft_second_step(stack_a);
	}
	if (first->value < middle->value && middle->value > last->value)
	{
		ft_rra(stack_a, 1);
		ft_second_step(stack_a);
	}
	if (first->value > middle->value && first->value < last->value)
		ft_sa(stack_a, 1);
}

void	ft_third_step(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*max_target;
	t_stack	*tmpa;
	t_stack	*tmpb;
	int		rest;

	tmpa = *stack_a;
	tmpb = *stack_b;
	max_target = ft_max_index(stack_a);
	while (tmpb)
	{
		if (tmpb->index > max_target->index)
			tmpb->target = ft_min_index(stack_a)->pos;
		rest = max_target->index - tmpb->index;
		ft_calculate_target(tmpa, tmpb, &rest);
		tmpa = *stack_a;
		tmpb = tmpb->next;
	}
}

void	ft_fourth_step(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapest;

	cheapest = ft_calculate_cheapest(stack_b);
	while (cheapest->cost_a < 0 && cheapest->cost_b < 0)
	{
		ft_rrr(stack_a, stack_b, 1);
		cheapest->cost_a++;
		cheapest->cost_b++;
	}
	while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
	{
		ft_rr(stack_a, stack_b, 1);
		cheapest->cost_a--;
		cheapest->cost_b--;
	}
	ft_rotate_a(stack_a, &(cheapest->cost_a));
	ft_rotate_b(stack_b, &(cheapest->cost_b));
	ft_pa(stack_a, stack_b, 1);
}

void	ft_last_step(t_stack **stack_a)
{
	int	first;
	int	size;

	size = ft_stacksize(*stack_a);
	first = ft_min_index(stack_a)->index;
	if (first > size / 2)
	{
		while ((*stack_a)->index < size)
			ft_rra(stack_a, 1);
	}
	else
	{
		while ((*stack_a)->index != 1)
			ft_rra(stack_a, 1);
	}
}

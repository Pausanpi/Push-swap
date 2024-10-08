/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:04:30 by pausanch          #+#    #+#             */
/*   Updated: 2024/09/23 10:45:39 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_control(t_stack **stack_a, t_stack **stack_b, int i)
{
	if (i == 2)
		ft_sa(stack_a, 1);
	if (i == 3)
		ft_sort_top3(stack_a);
	if (i > 3)
	{
		ft_put_index(stack_a);
		ft_split_a(stack_a, stack_b);
		ft_sort_top3(stack_a);
		while (ft_stacksize(*stack_b) > 0)
		{
			ft_put_position(stack_a);
			ft_put_position(stack_b);
			ft_set_targets(stack_a, stack_b);
			ft_calculate_cost(stack_a, stack_b);
			ft_move_best(stack_a, stack_b);
		}
		if (!ft_correct_orden(stack_a))
			ft_align_a(stack_a);
	}
}

void	ft_rotate_a(t_stack **stack_a, int *cost_a)
{
	if (*cost_a > 0)
	{
		while (*cost_a > 0)
		{
			ft_ra(stack_a, 1);
			(*cost_a)--;
		}
	}
	if (*cost_a < 0)
	{
		while (*cost_a < 0)
		{
			ft_rra(stack_a, 1);
			(*cost_a)++;
		}
	}
}

void	ft_rotate_b(t_stack **stack_b, int *cost_b)
{
	if (*cost_b > 0)
	{
		while (*cost_b > 0)
		{
			ft_rb(stack_b, 1);
			(*cost_b)--;
		}
	}
	if (*cost_b < 0)
	{
		while (*cost_b < 0)
		{
			ft_rrb(stack_b, 1);
			(*cost_b)++;
		}
	}
}

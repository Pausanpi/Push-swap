/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:41:02 by pausanch          #+#    #+#             */
/*   Updated: 2024/01/25 17:08:14 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* static void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap_node)
{
	while (*b != cheap_node->target_node
		&& *a != cheap_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
} */

/* static void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheap_node)
{
	while (*b != cheap_node->target_node
		&& *a != cheap_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
} */

static void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheap_node;

	cheap_node = get_cheapest(*a);
	if (cheap_node->above_median && cheap_node->target_node->above_median)
		rotate_both(a, b, cheap_node);
	else if (!(cheap_node->above_median)
		&& !(cheap_node->target_node->above_median))
		rev_rotate_both(a, b, cheap_node);
	prep_for_push(a, cheap_node, 'a');
	prep_for_push(b, cheap_node->target_node, 'b');
	pb(b, a);
}

static void	move_b_to_a(t_stack **a, t_stack **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b);
}

static void	min_on_top(t_stack **a)
{
	while ((*a)->value != find_min(*a)->value)
	{
		if (find_min(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	sort_stacks(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}

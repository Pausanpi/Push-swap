/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:01:08 by pausanch          #+#    #+#             */
/*   Updated: 2024/01/25 17:08:21 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap_node)
{
	while (*b != cheap_node->target_node
		&& *a != cheap_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheap_node)
{
	while (*b != cheap_node->target_node
		&& *a != cheap_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}
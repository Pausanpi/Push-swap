/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:47 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/16 12:52:39 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*ant_last;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		ant_last = *stack;
		while (ant_last->next != last)
			ant_last = ant_last->next;
		last->next = *stack;
		ant_last->next = NULL;
		*stack = last;
	}
}

void	ft_rra(t_stack **a,	bool p)
{
	ft_rev_rotate(a);
	if (p)
		ft_printf("rra\n");
}

void	ft_rrb(t_stack **b,	bool p)
{
	ft_rev_rotate(b);
	if (p)
		ft_printf("rrb\n");
}

void	ft_rrr(t_stack **a, t_stack **b,	bool p)
{
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	if (p)
		ft_printf("rrr\n");
}

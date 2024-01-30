/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:45:19 by pausanch          #+#    #+#             */
/*   Updated: 2024/01/10 15:45:24 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("\e[38;5;204mpa\033[0m\n");
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_printf("\e[38;5;171mpb\033[0m\n");
}

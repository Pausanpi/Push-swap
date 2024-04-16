/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:45:22 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/16 12:51:54 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*Intercambia los dos primeros elementos en la parte superior de la pila. No 
hace nada si hay uno o ningún elemento en la pila*/

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_stacksize(*stack) > 1)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
	}
}

void	ft_sa(t_stack **a, bool p)
{
	ft_swap(a);
	if (p)
		ft_printf("sa\n");
}

void	ft_sb(t_stack **b, bool p)
{
	ft_swap(b);
	if (p)
		ft_printf("b\n");
}

void	ft_ss(t_stack **a, t_stack **b, bool p)
{
	ft_swap(a);
	ft_swap(b);
	if (p)
		ft_printf("ss\n");
}

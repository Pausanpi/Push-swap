/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:58 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/12 17:59:22 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*Desplaza todos los elementos de la pila hacia arriba 1. El primer elemento
se convierte en el último*/

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stacksize(*stack) > 1)
	{
		first = *stack;
		last = *stack;
		*stack = first->next;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
}

void	ft_ra(t_stack **a, bool p)
{
	ft_rotate(a);
	if (p)
		ft_printf("\e[38;5;128mra\033[0m\n");
}

void	ft_rb(t_stack **b, bool p)
{
	ft_rotate(b);
	if (p)
		ft_printf("\e[38;5;135mrb\033[0m\n");
}

void	ft_rr(t_stack **a, t_stack **b, bool p)
{
	ft_rotate(a);
	ft_rotate(b);
	if (p)
		ft_printf("\e[38;5;165mrr\033[0m\n");
}

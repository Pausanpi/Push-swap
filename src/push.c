/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:45:19 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/16 12:52:13 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (ft_stacksize(*src) >= 1)
	{
		tmp = *src;
		*src = (*src)->next;
		tmp->next = *dst;
		*dst = tmp;
	}
}

/*Toma el primer elemento en la parte superior de la pila B y lo coloca en la 
parte superior de A. No hace nada si B está vacía*/

void	ft_pa(t_stack **a, t_stack **b, bool p)
{
	ft_push(a, b);
	if (p)
		ft_printf("pa\n");
}

/*Toma el primer elemento en la parte superior de la pila A y lo coloca en la 
parte superior de B. No hace nada si A está vacía*/

void	ft_pb(t_stack **b, t_stack **a, bool p)
{
	ft_push(b, a);
	if (p)
		ft_printf("pb\n");
}

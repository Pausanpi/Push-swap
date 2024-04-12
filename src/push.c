/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:45:19 by pausanch          #+#    #+#             */
/*   Updated: 2024/04/12 17:57:28 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	/* if (!*src || !(*src)->next)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp; */
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
		ft_printf("\e[38;5;204mpa\033[0m\n");
}

/*Toma el primer elemento en la parte superior de la pila A y lo coloca en la 
parte superior de B. No hace nada si A está vacía*/

void	ft_pb(t_stack **b, t_stack **a, bool p)
{
	ft_push(b, a);
	if (p)
		ft_printf("\e[38;5;171mpb\033[0m\n");
}

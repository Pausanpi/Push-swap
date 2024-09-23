/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:36:55 by pausanch          #+#    #+#             */
/*   Updated: 2024/09/19 12:36:55 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_msg(t_stack **stack_a, t_stack **stack_b, char *order)
{
	if (ft_strncmp(order, "sa\n", 3) == 0)
		return (ft_sa(stack_a, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "sb\n", 3) == 0)
		return (ft_sb(stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "ss\n", 3) == 0)
		return (ft_ss(stack_a, stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "pa\n", 3) == 0)
		return (ft_pa(stack_a, stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "pb\n", 3) == 0)
		return (ft_pb(stack_a, stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "ra\n", 3) == 0)
		return (ft_ra(stack_a, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "rb\n", 3) == 0)
		return (ft_rb(stack_a, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "rr\n", 3) == 0)
		return (ft_rr(stack_a, stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "rra\n", 4) == 0)
		return (ft_rra(stack_a, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "rrb\n", 4) == 0)
		return (ft_rrb(stack_b, 0), EXIT_SUCCESS);
	if (ft_strncmp(order, "rrr\n", 4) == 0)
		return (ft_rrr(stack_a, stack_b, 0), EXIT_SUCCESS);
	return (ft_printf("Error\n"), EXIT_FAILURE);
}

void	ft_final_check(t_stack **s_a, t_stack **s_b)
{
	if (ft_correct_orden(s_a) && *s_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*aux;

	node = *stack;
	while (node)
	{
		aux = node->next;
		free(node);
		node = aux;
	}
	free(stack);
}

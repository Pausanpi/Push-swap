/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:11:37 by pausanch          #+#    #+#             */
/*   Updated: 2024/05/21 05:41:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*Inicializa los stacks a nulos*/

static void	ft_init_stacks(t_stack ***stack_a, t_stack ***stack_b)
{
	*stack_a = (t_stack **)malloc(sizeof(t_stack *));
	if (!*stack_a)
	{
		ft_printf("Error init stack a\n");
		exit(EXIT_FAILURE);
	}
	**stack_a = NULL;
	*stack_b = (t_stack **)malloc(sizeof(t_stack *));
	if (!stack_b)
	{
		free(*stack_a);
		ft_printf("Error init stack b\n");
		exit(EXIT_FAILURE);
	}
	**stack_b = NULL;
}

static char	**ft_check_args(int ac, char **av)
{
	char	**str;

	if (ac < 2)
		exit(EXIT_FAILURE);
	else if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (!str)
		{
			ft_printf("Error argumentos\n");
			exit(EXIT_FAILURE);
		}
		ft_check_condits(str);
		return (str);
	}
	ft_check_condits(av + 1);
	return (av + 1);
}

/*Pasa los argumentos que hemos pasado por teclado al stack a*/

static int	ft_transf_args(char *value_str, t_stack **stack)
{
	int		value;
	t_stack	*new_node;

	value = ft_atoi(value_str);
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (ft_printf("Error\n"), 0);
	new_node->value = value;
	new_node->pos = 0;
	new_node->target = 0;
	new_node->index = 0;
	new_node->cost_a = 0;
	new_node->cost_b = 0;
	new_node->next = NULL;
	ft_stackadd_last(stack, new_node);
	return (1);
}

static void	ft_free_stack(t_stack **stack)
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

int	main(int argc, char **argv)
{
	t_stack	**s_a;
	t_stack	**s_b;
	char	**str;
	int		i;

	ft_init_stacks(&s_a, &s_b);
	str = ft_check_args(argc, argv);
	i = 0;
	while (str[i] != NULL)
	{
		if (!ft_transf_args(str[i], s_a))
		{
			ft_printf("Error transf args\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	if (!ft_correct_orden(s_a))
		ft_sort_control(s_a, s_b, i);
 	if (argc == 2)
 		ft_free_str(str);
 	return (ft_free_stack(s_a), ft_free_stack(s_b), 0);
}

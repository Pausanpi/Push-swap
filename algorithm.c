#include "../include/push_swap.h"

void ft_algo(t_stack **stack_a, t_stack **b, int i)
{
	if (i == 2)
		ft_sa(stack_a,1);
	if (i == 3)
		ft_second_step(stack_a);
	if ( i > 3)
	{
		ft_put_index(stack_a);

	}
}

void ft_second_step(t_stack **stack_a)
{
	if (stack_a->value > stack_a->next->value && stack_a->value > stack_a->next->next->value)
	{
		ft_ra(stack_a, 1);
		ft_second_step(stack_a);
	}
	if (stack_a->value < stack_a->next->value && stack_a->next->value > stack_a->next->next->value)
	{
		ft_rra(stack_a, 1);
		ft_second_step(stack_a);
	}
	if (stack_a->value > stack_a->next->value && stack_a->value < stack_a->next->next->value)
		ft_sa(stack_a);
}

void	ft_put_index(t_stack **stack)
{
	t_stack	*current;
	t_stack *cmp;

	current = *stack;
	while(current)
	{
		cmp = *stack;
		current->index = 1;
		while (cmp)
		{
			if (cmp->values < current->values)
				current->index++;
			cmp = cmp->next;
		}
		current = current->next;<
	}
}
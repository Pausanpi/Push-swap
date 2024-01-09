#include "../include/push_swap.h"

void current_index(t_stack *stack)
{
	int	i;
	int	median;
	
	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

static void set_target_a(t_stack *a, t_stack *b)
{
	t_stack *current_b;
	t_stack *target_node;
	long	bes_match_index;
	
	while(a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->value < a->value && current_b->value > best_match_index)
			{
				best_match_index = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost_analysis_a(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;
	
	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - (a->index);
		if (a->taget_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += len_b - (a->target_node->index);
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	long	cheap_value;
	t_stack	*cheap_node;
	
	if (!stack)
		return ;
	cheap_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheap_value)
		{
			cheap_value = stack->push_cost;
			cheap_node = stack;
		}
		stack = stack->next;
	}
	cheap_node->cheapest = true;
}

void	init_nodes_a(t_stack *a, t_stack *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}














#include "../include/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*last_node;
	
	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("\e[38;5;128mra\033m[0m\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("\e[38;5;135mrb\033m[0m\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("\e[38;5;165mrr\033m[0m\n");
}

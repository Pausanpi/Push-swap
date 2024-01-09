#include "../include/push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack	*last;
	
	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	ft_printf("\e[38;5;208mrra\033[0m\n");
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	ft_printf("\e[38;5;214mrrb\033[0m\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("\e[38;5;136mrrr\033[0m\n");
}

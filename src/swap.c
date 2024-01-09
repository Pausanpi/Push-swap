#include "../include/push_swap.h"

static void	swap(t_stack **head)  //revisar si funciona bien
{
	t_stack	*tmp;
	
	if (!(*head) || !(*head)->next)
		return ;
	tmp = (*head)->next;
	tmp->next->prev = *head;
	(*head)->prev = tmp;
	(*head)->next = tmp->next;
	tmp->prev = NULL;
	tmp->next = *head;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("\e[38;5;45msa\033[0m\n");
}

void	sb(t_stack **b)
{
	swap(b);
	ft_printf("\e[38;5;51msb\033[0m\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("\e[38;5;14mss\033[0m\n");
}

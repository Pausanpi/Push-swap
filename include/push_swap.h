#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h> //para definir MIN y MAX
# include "../libft/libft.h"

typedef struct s_stack
{
	int		value;
	int		index;
	int		cost;
	bool	above_median;
	bool	cheapest;
	struct s_stack *target_node;
	struct s_stack *next;
	struct s_stack *prev;
}	t_stack;

//Handle errors
int		error_syntax(char *str);
int		error_duplicate(t_stack *a, int n);
void	free_stack(t_stack **stack);
void	free_errors(t_stack **a);

//Stack initiation
void	init_stack_a(t_stack **a, char **argv);
//char	**split...

//Nodes initiation
void	init_nodes_a(t_stack *a, t_stack *b);
void	init_nodes_b(t_stack *a, t_stack *b);
void 	current_index(t_stack *stack);
void	set_cheapest(t_stack *stack);
t_stack	*get_cheapest(t_stack *stack);
void	prep_for_push(t_stack **stack, t_stack *top_node, char name);

//Stack utils
int		stack_len(t_stack *stack);
t_stack *find_last(t_stack *stack);
bool	stack_sorted(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);

//Commands
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

//Algorithms
void	sort_three(t_stack **a);
void	sort_stacks(t_stack **a, t_stack **b);

#endif

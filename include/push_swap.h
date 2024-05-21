/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:37:52 by pausanch          #+#    #+#             */
/*   Updated: 2024/05/21 05:50:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

//Commands
void	ft_swap(t_stack **stack);
void	ft_sa(t_stack **a, bool p);
void	ft_sb(t_stack **b, bool p);
void	ft_ss(t_stack **a, t_stack **b, bool p);

void	ft_rotate(t_stack **stack);
void	ft_ra(t_stack **a, bool p);
void	ft_rb(t_stack **b, bool p);
void	ft_rr(t_stack **a, t_stack **b, bool p);

void	ft_rev_rotate(t_stack **stack);
void	ft_rra(t_stack **a, bool p);
void	ft_rrb(t_stack **b, bool p);
void	ft_rrr(t_stack **a, t_stack **b, bool p);

void	ft_push(t_stack **dst, t_stack **src);
void	ft_pa(t_stack **a, t_stack **b, bool p);
void	ft_pb(t_stack **b, t_stack **a, bool p);

//Algorithms
void	ft_algo(t_stack **stack_a, t_stack **stack_b, int i);
void	ft_rotate_a(t_stack **stack_a, int *cost_a);
void	ft_rotate_b(t_stack **stack_b, int *cost_b);

//Steps
void	ft_first_step(t_stack **stack_a, t_stack **b);
void	ft_second_step(t_stack **stack_a);
void	ft_third_step(t_stack **stack_a, t_stack **stack_b);
void	ft_fourth_step(t_stack **stack_a, t_stack **stack_b);
void	ft_last_step(t_stack **stack_a);

//utils
void	*ft_stacklast(t_stack *stack);
int		ft_stacksize(t_stack *stack);
void	ft_stackadd_last(t_stack **stack, t_stack *new);
void	ft_free_str(char **str);
bool	ft_correct_orden(t_stack **stack);

//Position
void	ft_put_position(t_stack **stack);
void	ft_put_index(t_stack **stack);
t_stack	*ft_max_index(t_stack **stack_a);
t_stack	*ft_min_index(t_stack **stack_a);
void	ft_calculate_target(t_stack *tmpa, t_stack *tmpb, int *rest);

//Costs
t_stack	*ft_calculate_cheapest(t_stack **stack_b);
void	ft_calculate_cost(t_stack **stack_a, t_stack **stack_b);

//Input_checks
void	ft_check_condits(char *argv[]);

///////////////////////////////////////////
//		BONUS
int		ft_msg(t_stack **stack_a, t_stack **stack_b, char *order);
int		ft_final_check(t_stack **s_a, t_stack **s_b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:41:42 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 16:10:34 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> //free, malloc
# include <stdio.h> //printf
# include <stdbool.h> //bool
# include <limits.h> // INT_MAX
# include <stddef.h> //size_t
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				cost;
	int				index;
	int				middle_distance;
	bool			above_middle;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

int		main(int argc, char **argv);
char	**ft_split_arg(int argc, char **argv);
char	*ft_argtos(int argc, char **argv);
void	fillstack_a(t_stack **a, char **argv);
void	append_node(t_stack **stack, int nbr);
void	free_stack(t_stack **stack, bool error, char **argv);
void	free_stackfinal(t_stack **lst);
int		not_number(char *c);
int		duplicates(t_stack *a, int compared);
t_stack	*ft_stacklast(t_stack *lst);
int		stack_len(t_stack *lst);
t_stack	*stack_last(t_stack *lst);
bool	stack_sorted(t_stack *lst);
t_stack	*find_cheapest(t_stack *a);
t_stack	*find_max(t_stack *lst);
t_stack	*find_min(t_stack *lst);
void	sort_three(t_stack **a);
void	swap(t_stack **lst);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rotate(t_stack **lst);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	revrotate(t_stack **lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstbeforelast(t_stack *lst);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	push(t_stack **to, t_stack **from);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	sort_stacks(t_stack **a, t_stack **b);
void	node_setup(t_stack *b, t_stack *a);
void	node_index(t_stack *lst);
void	node_util1(t_stack *lst, int middlevalue);
void	node_util2(t_stack *lst, int middlevalue);
void	connect_target(t_stack *b, t_stack *a);
void	cost(t_stack *a);
void	abovecost(t_stack *b);
void	undercost(t_stack *b);
void	btoa(t_stack **b, t_stack **a);
void	bring_min(t_stack **a);
void	minabove(t_stack **a, t_stack *min);
void	minunder(t_stack **a, t_stack *min);
void	printcommand_b(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	abovemoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	abovemoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	undermoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	undermoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	diffmoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a);
void	diffmoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a);

#endif
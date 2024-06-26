/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:51:08 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 13:44:56 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20000
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../srcs/push_swap.h"
# include "../libft/libft.h"

int		main(int argc, char **argv);
void	main_util1(t_stack *a, t_stack *b, char *line, char **argv);
void	main_util2(t_stack *a, t_stack *b, char **argv);
char	*get_next_line(int fd);
char	*ft_strjoinline(char *s1, char *s2);
int		ft_strnewline(char *s);
int		filter_moves(t_stack **a, t_stack **b, char *line);
void	move_swap(t_stack **a, t_stack **b, char *line);
void	move_rotate(t_stack **a, t_stack **b, char *line);
void	move_revrotate(t_stack **a, t_stack **b, char *line);
void	move_push(t_stack **a, t_stack **b, char *line);
void	swapstack(t_stack **lst);
void	rotatestack(t_stack **lst);
void	revrotatestack(t_stack **stack);
void	pushstack(t_stack **to, t_stack **from);
t_stack	*ft_lstlast_bonus(t_stack *lst);
t_stack	*ft_lstbeforelast_bonus(t_stack *lst);
char	*ft_argtos_bonus(int argc, char **argv);
char	**ft_split_arg_bonus(int argc, char **argv);
void	free_stackb_bonus(t_stack **lst);
void	free_stack_bonus(t_stack **lst, bool error, char **argv);
t_stack	*ft_stacklast_bonus(t_stack *lst);
void	append_node_bonus(t_stack **lst, int nbr);
void	fillstack_a_bonus(t_stack **a, char **argv);
bool	stack_sorted_bonus(t_stack *lst);
char	*ft_argtos_bonus(int argc, char **argv);
int		duplicates_bonus(t_stack *a, int compared);
int		not_number_bonus(char *c);
t_stack	*stack_last_bonus(t_stack *lst);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:56:14 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/03 19:49:59 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*max_node;

	max_node = find_max(*a);
	if (max_node == *a)
		ra(a);
	if ((*a)->next == max_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_stacks(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = stack_len(*a);
	while (len_a > 3 && !stack_sorted(*a))
	{
		pb(b, a);
		len_a--;
	}
	if (len_a == 3 && !stack_sorted(*a))
		sort_three(a);
	while (*b)
	{
		node_setup(*b, *a);
		btoa(b, a);
	}
	bring_min(a);
}

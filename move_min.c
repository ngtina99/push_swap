/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:05:16 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/03 20:09:10 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	minabove(t_stack **a, t_stack *min)
{
	int	move;

	move = min->index;
	while (move > 0)
	{
		ra(a);
		move--;
	}
}

void	minunder(t_stack **a, t_stack *min)
{
	int	move;

	move = (min->index);
	while (move > 0)
	{
		rra(a);
		move--;
	}
}

void	bring_min(t_stack **a)
{
	t_stack	*min;

	node_index(*a);
	min = find_min(*a);
	if (min->index == 0)
		return ;
	if (!(min->index == 0) && (min->above_middle))
		minabove(a, min);
	if (!(min->index == 0) && !(min->above_middle))
		minunder(a, min);
}

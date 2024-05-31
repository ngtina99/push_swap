/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_diff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:39:50 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/03 19:28:03 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	diffmoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	second;

	first = a->index;
	while (first > 0)
	{
		rb(a_stack);
		first--;
	}
	second = (a->target->index);
	while (second > 0)
	{
		rra(b_stack);
		second--;
	}
}

void	diffmoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	second;

	first = (a->target->index);
	while (first > 0)
	{
		ra(b_stack);
		first--;
	}
	second = (a->index);
	while (second > 0)
	{
		rrb(a_stack);
		second--;
	}
}

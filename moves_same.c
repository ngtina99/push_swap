/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_same.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:38:14 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/03 19:27:44 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abovemoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	diff;

	first = a->target->index;
	while (first > 0)
	{
		rr(a_stack, b_stack);
		first--;
	}
	diff = (a->index) - (a->target->index);
	while (diff > 0)
	{
		rb(a_stack);
		diff--;
	}
}

void	abovemoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	diff;

	first = a->index;
	while (first > 0)
	{
		rr(a_stack, b_stack);
		first--;
	}
	diff = (a->target->index) - (a->index);
	while (diff > 0)
	{
		ra(b_stack);
		diff--;
	}
}

void	undermoves1(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	diff;

	first = (a->index);
	while (first > 0)
	{
		rrr(a_stack, b_stack);
		first--;
	}
	diff = (a->target->index) - (a->index);
	while (diff > 0)
	{
		rra(b_stack);
		diff--;
	}
}

void	undermoves2(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	int	first;
	int	diff;

	first = (a->target->index);
	while (first > 0)
	{
		rrr(a_stack, b_stack);
		first--;
	}
	diff = (a->index) - (a->target->index);
	while (diff > 0)
	{
		rrb(a_stack);
		diff--;
	}
}

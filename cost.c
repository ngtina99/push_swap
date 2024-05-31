/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:03:06 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/03 17:03:23 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abovecost(t_stack *b)
{
	int	diff;

	if ((b->index) >= (b->target->index))
	{
		b->cost += b->target->index;
		diff = (b->index) - (b->target->index);
		b->cost += diff;
	}
	if ((b->index) < (b->target->index))
	{
		b->cost += b->index;
		diff = (b->target->index) - (b->index);
		b->cost += diff;
	}
}

void	undercost(t_stack *b)
{
	int	diff;

	if ((b->index) >= (b->target->index))
	{
		b->cost += b->target->index;
		diff = (b->index) - (b->target->index);
		b->cost += diff;
	}
	if ((b->index) < (b->target->index))
	{
		b->cost += b->index;
		diff = (b->target->index) - (b->index);
		b->cost += diff;
	}
}

void	cost(t_stack *b)
{
	while (b)
	{
		b->cost = 0;
		if (b->above_middle && b->target->above_middle)
			abovecost(b);
		if (!(b->above_middle) && !(b->target->above_middle))
			undercost(b);
		if ((b->above_middle) && (!(b->target->above_middle)))
		{
			b->cost += b->index;
			b->cost += b->target->index;
		}
		if ((!(b->above_middle)) && b->target->above_middle)
		{
			b->cost += b->target->index;
			b->cost += b->index;
		}
		b = b->next;
	}
}

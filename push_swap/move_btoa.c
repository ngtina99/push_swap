/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_btoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:38:14 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 15:59:10 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	btoa(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = find_cheapest(*a);
	printcommand_b(a, b, cheapest);
	pa(b, a);
}

void	printcommand_b(t_stack **a_stack, t_stack **b_stack, t_stack *a)
{
	if (a->above_middle && a->target->above_middle)
	{
		if ((a->index) >= (a->target->index))
			abovemoves1(a_stack, b_stack, a);
		if ((a->index) < (a->target->index))
			abovemoves2(a_stack, b_stack, a);
	}
	if (!(a->above_middle) && !(a->target->above_middle))
	{
		if ((a->index) <= (a->target->index))
			undermoves1(a_stack, b_stack, a);
		if ((a->index) > (a->target->index))
			undermoves2(a_stack, b_stack, a);
	}
	if ((a->above_middle) && (!(a->target->above_middle)))
		diffmoves1(a_stack, b_stack, a);
	if ((!(a->above_middle)) && (a->target->above_middle))
		diffmoves2(a_stack, b_stack, a);
}

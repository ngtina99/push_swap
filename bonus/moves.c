/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:41:20 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/05 14:08:02 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	move_swap(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa"))
		swapstack(a);
	if (!ft_strcmp(line, "sb"))
		swapstack(b);
	if (!ft_strcmp(line, "ss"))
	{
		swapstack(a);
		swapstack(b);
	}
}

void	move_rotate(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "ra"))
		rotatestack(a);
	if (!ft_strcmp(line, "rb"))
		rotatestack(b);
	if (!ft_strcmp(line, "rr"))
	{
		rotatestack(a);
		rotatestack(b);
	}
}

void	move_revrotate(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "rra"))
		revrotatestack(a);
	if (!ft_strcmp(line, "rrb"))
		revrotatestack(b);
	if (!ft_strcmp(line, "rrr"))
	{
		revrotatestack(a);
		revrotatestack(b);
	}
}

void	move_push(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "pa"))
		pushstack(a, b);
	if (!ft_strcmp(line, "pb"))
		pushstack(b, a);
}

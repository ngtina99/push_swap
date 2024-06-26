/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:41:49 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 21:03:02 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	filter_moves(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		move_swap(a, b, "sa");
	else if (!ft_strcmp(line, "sb\n"))
		move_swap(a, b, "sb");
	else if (!ft_strcmp(line, "ss\n"))
		move_swap(a, b, "ss");
	else if (!ft_strcmp(line, "ra\n"))
		move_rotate(a, b, "ra");
	else if (!ft_strcmp(line, "rb\n"))
		move_rotate(a, b, "rb");
	else if (!ft_strcmp(line, "rr\n"))
		move_rotate(a, b, "rr");
	else if (!ft_strcmp(line, "rra\n"))
		move_revrotate(a, b, "rra");
	else if (!ft_strcmp(line, "rrb\n"))
		move_revrotate(a, b, "rrb");
	else if (!ft_strcmp(line, "rrr\n"))
		move_revrotate(a, b, "rrr");
	else if (!ft_strcmp(line, "pa\n"))
		move_push(a, b, "pa");
	else if (!ft_strcmp(line, "pb\n"))
		move_push(a, b, "pb");
	else
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:33:45 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:21:59 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **lst)
{
	t_stack	*new_last;
	t_stack	*last;

	new_last = *lst;
	last = stack_last(*lst);
	if (!(*lst) || !(*lst)->next) 
	{
		return ;
	}
	*lst = (*lst)->next;
	new_last->next = NULL;
	last->next = new_last;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

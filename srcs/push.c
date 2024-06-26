/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:35:52 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:18:09 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **to, t_stack **from)
{
	t_stack	*pushnode;

	pushnode = *from;
	if (*from == NULL)
		return ;
	*from = (*from)->next;
	if (*from != NULL)
	{
		(*from)->prev = NULL;
	}
	pushnode->next = NULL;
	if (*to == NULL)
	{
		*to = pushnode;
	}
	else
	{
		pushnode->next = *to;
		(*to)->prev = pushnode;
		*to = pushnode;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_printf("pb\n");
}

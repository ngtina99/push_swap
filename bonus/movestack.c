/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movestack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:41:20 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 12:56:34 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swapstack(t_stack **lst)
{
	int	tmp;

	if (!(*lst) || !(*lst)->next)
		return ;
	tmp = (*lst)->value;
	(*lst)->value = (*lst)->next->value;
	(*lst)->next->value = tmp;
}

void	rotatestack(t_stack **lst)
{
	t_stack	*new_last;
	t_stack	*last;

	new_last = *lst;
	last = stack_last_bonus(*lst);
	if (!(*lst) || !(*lst)->next) 
	{
		return ;
	}
	*lst = (*lst)->next;
	new_last->next = NULL;
	last->next = new_last;
}

void	revrotatestack(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*before_last;

	if (!(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast_bonus(*lst);
	before_last = ft_lstbeforelast_bonus(*lst);
	tmp = *lst;
	*lst = last;
	(*lst)->next = tmp;
	before_last->next = NULL;
}

void	pushstack(t_stack **to, t_stack **from)
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

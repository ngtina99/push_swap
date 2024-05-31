/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:47:09 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 12:53:55 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*before_last;

	if (!(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	before_last = ft_lstbeforelast(*lst);
	tmp = *lst;
	*lst = last;
	(*lst)->next = tmp;
	before_last->next = NULL;
}

void	rra(t_stack **a)
{
	revrotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	revrotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	revrotate(a);
	revrotate(b);
	ft_printf("rrr\n");
}

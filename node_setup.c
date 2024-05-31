/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 01:01:19 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:17:47 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	node_util1(t_stack *lst, int middlevalue)
{
	lst->above_middle = false;
	lst->index = middlevalue;
}

void	node_util2(t_stack *lst, int middlevalue)
{
	lst->above_middle = false;
	lst->index = 1 + middlevalue;
}

void	node_index(t_stack *lst)
{
	int	i;
	int	middle;
	int	middlevalue;
	int	stackl;

	i = 0;
	stackl = stack_len(lst);
	middlevalue = stack_len(lst) / 2;
	middle = stack_len(lst) / 2;
	while (lst)
	{
		if (i < middle || i == 0)
		{
			lst->above_middle = true;
			lst->index = i;
		}
		if (stackl % 2 == 0 && i >= middle && i != 0)
			node_util1(lst, middlevalue);
		if (stackl % 2 == 1 && i >= middle && i != 0)
			node_util2(lst, middlevalue);
		if (i >= middle && i != 0)
			middlevalue--;
		i++;
		lst = lst->next;
	}
}

void	connect_target(t_stack *b, t_stack *a)
{
	t_stack	*target_node;
	t_stack	*h;
	long	cmp;

	while (b)
	{
		h = a;
		target_node = h;
		while (h)
		{
			cmp = (target_node->value - b->value);
			if (cmp < 0)
				cmp = LONG_MAX;
			if (((h->value - b->value) < cmp && (h->value - b->value) > 0))
				target_node = h;
			h = h->next;
		}
		if (target_node->value < b->value)
			target_node = find_min(a);
		b->target = target_node;
		b = b ->next;
	}
}

void	node_setup(t_stack *b, t_stack *a)
{
	node_index(b);
	node_index(a);
	connect_target(b, a);
	cost(b);
}

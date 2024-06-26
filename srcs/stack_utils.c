/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:05:16 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:18:57 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_stack	*stack_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

bool	stack_sorted(t_stack *lst)
{
	if (!lst)
		exit(1);
	while (lst->next)
	{
		if (lst->value > lst->next->value)
			return (false);
		lst = lst->next;
	}
	return (true);
}

t_stack	*find_cheapest(t_stack *a)
{
	t_stack	*cheapest_node;
	int		cheapest_value;

	cheapest_node = NULL;
	cheapest_node = a;
	cheapest_value = a->cost;
	while (a)
	{
		if (a && a->cost < cheapest_value)
		{
			cheapest_value = a->cost;
			cheapest_node = a;
		}
		a = a->next;
	}
	return (cheapest_node);
}

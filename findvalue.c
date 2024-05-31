/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findvalue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:26:42 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:16:37 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_max(t_stack *lst)
{
	int		max;
	t_stack	*max_node;

	max = lst->value;
	max_node = lst;
	while (lst)
	{
		if (max < lst->value)
		{
			max = lst->value;
			max_node = lst;
		}
		lst = lst->next;
	}
	return (max_node);
}

t_stack	*find_min(t_stack *lst)
{
	int		min;
	t_stack	*min_node;

	min = lst->value;
	min_node = lst;
	while (lst)
	{
		if (min > lst->value)
		{
			min = lst->value;
			min_node = lst;
		}
		lst = lst->next;
	}
	return (min_node);
}

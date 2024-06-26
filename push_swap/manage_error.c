/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 01:11:49 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 14:58:25 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicates(t_stack *a, int compared)
{
	while (a)
	{
		if (a->value == compared)
			return (1);
		a = a->next;
	}
	return (0);
}

int	not_number(char *c)
{
	int	i;

	i = 0;
	if (!(c[i] == '+' || c[i] == '-' || (c[i] >= '0' && c[i] <= '9')))
		return (1);
	i = 1;
	while (c[i])
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (1);
		i++;
	}
	if (i == 1 && (c[0] == '+' || c[0] == '-'))
		return (1);
	return (0);
}

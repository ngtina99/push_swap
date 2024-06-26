/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:47:09 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 15:47:01 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!(lst))
		return (NULL);
	while ((lst)->next)
		lst = (lst)->next;
	return (lst);
}

t_stack	*ft_lstbeforelast(t_stack *lst)
{
	if (!(lst))
		return (NULL);
	while ((lst)->next && lst->next->next)
		lst = (lst)->next;
	return (lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movestack_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:57:18 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 15:47:55 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_lstlast_bonus(t_stack *lst)
{
	if (!(lst))
		return (NULL);
	while ((lst)->next)
		lst = (lst)->next;
	return (lst);
}

t_stack	*ft_lstbeforelast_bonus(t_stack *lst)
{
	if (!(lst))
		return (NULL);
	while ((lst)->next && lst->next->next)
		lst = (lst)->next;
	return (lst);
}

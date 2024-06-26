/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_stack_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:26:20 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 13:32:08 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_stacklast_bonus(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	append_node_bonus(t_stack **lst, int nbr)
{
	t_stack	*node;
	t_stack	*nlast;

	if (!lst)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->value = nbr;
	node->cost = 0;
	if (!(*lst))
	{
		*lst = node;
		node->prev = NULL;
	}
	else
	{
		nlast = ft_stacklast_bonus(*lst);
		nlast->next = node;
		node->prev = nlast;
	}
}

void	fillstack_a_bonus(t_stack **a, char **argv)
{
	int		i;
	long	value;
	bool	print_error;

	i = 1;
	print_error = true;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 11)
			free_stack_bonus(a, print_error, argv);
		if (not_number_bonus(argv[i]))
			free_stack_bonus(a, print_error, argv);
		value = ft_atoi(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			free_stack_bonus(a, print_error, argv);
		if (duplicates_bonus(*a, value))
			free_stack_bonus(a, print_error, argv);
		append_node_bonus(a, value);
		i++;
	}
}

bool	stack_sorted_bonus(t_stack *lst)
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

t_stack	*stack_last_bonus(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

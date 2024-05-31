/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:26:20 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 16:09:19 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stackfinal(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*current;

	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = NULL;
}

void	free_stack(t_stack **lst, bool error, char **argv)
{
	t_stack	*tmp;
	t_stack	*current;
	int		i;

	i = 0;
	while (argv[i])
		free(argv[i++]);
	free(argv);
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = NULL;
	if (error)
	{
		ft_printf("Error\n");
		exit(1);
	}
}

t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	append_node(t_stack **lst, int nbr)
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
		nlast = ft_stacklast(*lst);
		nlast->next = node;
		node->prev = nlast;
	}
}

void	fillstack_a(t_stack **a, char **argv)
{
	int		i;
	long	value;
	bool	print_error;

	i = 1;
	print_error = true;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 11)
			free_stack(a, print_error, argv);
		if (not_number(argv[i]))
			free_stack(a, print_error, argv);
		value = ft_atoi(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			free_stack(a, print_error, argv);
		if (duplicates(*a, value))
			free_stack(a, print_error, argv);
		append_node(a, value);
		i++;
	}
}

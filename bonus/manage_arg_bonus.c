/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_arg_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:46:43 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 15:47:40 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_stack_bonus(t_stack **lst, bool error, char **argv)
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

void	free_stackb_bonus(t_stack **lst)
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

char	*ft_argtos_bonus(int argc, char **argv)
{
	char	*s;
	char	*tmp;
	char	*space;
	int		i;

	s = NULL;
	i = 1;
	while (i < argc)
	{
		if (s == NULL)
			s = ft_strdup(argv[i]);
		else
		{
			space = " ";
			tmp = ft_strjoin(s, space);
			free(s);
			s = ft_strjoin(tmp, argv[i]);
			free(tmp);
			i++;
		}
	}
	return (s);
}

char	**ft_split_arg_bonus(int argc, char **argv)
{
	char	*s;

	s = ft_argtos_bonus(argc, argv);
	argv = ft_split(s, ' ');
	free (s);
	return (argv);
}

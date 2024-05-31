/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:46:43 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/07 16:44:39 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_argtos(int argc, char **argv)
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

char	**ft_split_arg(int argc, char **argv)
{
	char	*s;

	s = ft_argtos(argc, argv);
	argv = ft_split(s, ' ');
	free (s);
	return (argv);
}

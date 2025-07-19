/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:41:20 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/05/31 19:15:57 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	main_util1(t_stack *a, t_stack *b, char *line, char **argv)
{
	free(line);
	free_stack_bonus(&a, false, argv);
	if(b)
		free_stack_bonus(&b, false, argv);
	ft_printf("non-valid argument\n");
	exit(1);
}

void	main_util2(t_stack *a, t_stack *b, char **argv)
{
	if (stack_sorted_bonus(a) && !b)
	{
		free_stack_bonus(&a, false, argv);
		ft_printf("OK\n");
	}
	else
	{
		free_stackb_bonus(&b);
		free_stack_bonus(&a, false, argv);
		ft_printf("KO\n");
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	argv = ft_split_arg_bonus(argc, argv);
	fillstack_a_bonus(&a, &argv[0]);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (!ft_strcmp(line, "\n"))
		{
			free(line);
			break ;
		}
		if (!(filter_moves(&a, &b, line)))
			main_util1(a, b, line, argv);
		free(line);
	}
	main_util2(a, b, argv);
	//free(line);
}

// int	main(int argc, char **argv)
// {
// 	t_stack	*a;
// 	t_stack	*b;
// 	char	*line;
// 	int		i;

// 	a = NULL;
// 	b = NULL;
// 	if (argc == 1 || (argc == 2 && !argv[1][0]))
// 		return (1);
// 	argv = ft_split_arg_bonus(argc, argv);
// 	fillstack_a_bonus(&a, &argv[1]);
// 	while (1)
// 	{
// 		line = get_next_line(0);
// 		if (!line)
// 			break ;
// 		if (!ft_strcmp(line, "\n"))
// 			break ;
// 		if (!(filter_moves(&a, &b, line)))
// 		{
// 			free(line);
// 			free_stack_bonus(&a, false);
// 			free_stack_bonus(&b, true);
// 		}
// 		free(line);
// 	}
// 	if (stack_sorted_bonus(a))
// 		ft_printf("OK\n");
// 	else
// 		ft_printf("KO\n");
// 	free(line);
// 	i = 0;
// 	while (argv[i])
// 		free(argv[i++]);
// 	free(argv);
// 	free_stack_bonus(&a, false);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:49:50 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/02/04 22:30:37 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_strjoinline(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		s3 = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	else
		s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		s3[j++] = s2[i];
		if (s2[i] == '\n')
			break ;
		i++;
	}
	s3[j] = '\0';
	free(s1);
	return (s3);
}

int	ft_strnewline(char *buffer)
{
	size_t	i;
	size_t	j;
	size_t	newline;

	i = 0;
	j = 0;
	newline = 0;
	while (buffer[i])
	{
		if (newline)
		{
			buffer[j++] = buffer[i];
		}
		if (buffer[i] == '\n')
			newline = 1;
		buffer[i] = '\0';
		i++;
	}
	return (newline);
}

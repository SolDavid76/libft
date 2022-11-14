/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:00:59 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/14 14:55:53 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	wordcount(const char *str, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
			res++;
		i++;
	}
	return (res);
}

size_t	wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i)
}

void	freeall(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	res = malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!res)
		return (NULL);
	res[wordcount(str, c)] = NULL;
	while (res[i] != NULL)
	{
		res[i] = malloc(sizeof(char) * (wordlen(str, c) + 1))
		if (!res[i])
			freeall(str);
		i++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while (str[i][j] != c)
		{
			re
			j++;
		}
		i++;
	}
}

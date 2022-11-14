/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:00:59 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/14 18:25:43 by djanusz          ###   ########.fr       */
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
	return (i);
}

void	freeall(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**mallocall(const char *str, char c)
{
	char	**res;
	size_t	i;
	size_t	index;

	res = malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!res)
		return (NULL);
	res[wordcount(str, c)] = NULL;
	i = 0;
	index = 0;
	while (res[i] != NULL)
	{
		res[i] = malloc(sizeof(char) * (wordlen(&str[index], c) + 1));
		index += wordlen(&str[index], c);
		if (!res)
			freeall(res);
		i++;
	}
	return (res);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	index;
	
	res = mallocall(str, c);
	i = 0;
	index = 0;
	while(str[index] != '\0')
	{
		j = 0;
		while (str[index] != c && str[index] != '\0')
		{
			res[i][j] = str[index];
			j++;
			index++;
		}
		res[i][j] = '\0';
		index++;
		i++;
	}
	return (res);
}

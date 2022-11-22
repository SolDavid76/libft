/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:00:59 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/22 15:42:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(const char *str, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			res++;
		i++;
	}
	return (res);
}

static void	freeall(char **str)
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

static char	**mallocall(const char *str, char c)
{
	int		i;
	int		len;
	int		j;
	int		index;
	char	**res;

	res = malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	j = 0;
	index = 0;
	while (i <= len)
	{
		if (str[i] == c || str[i] == '\0')
		{
			res[index] = malloc(sizeof(char) * (i - j + 1));
			if (!res)
				freeall(res);
			index++;
			i++;
			j = i;
		}
		i++;
	}
	return (res);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		index;
	int		i;
	int		j;

	res = mallocall(str, c);
	index = 0;
	i = 0;
	j = 0;
	while (str[index])
	{
		if (str[index] == c)
		{
			res[i][j] = '\0';
			index++;
			i++;
			j = 0;
		}else{
			res[i][j] = str[index];
			index++;
			j++;
		}
	}
	res[i][j] = '\0';
	res[i + 1] = NULL;
	return (res);
}

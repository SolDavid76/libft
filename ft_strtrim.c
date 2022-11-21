/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:43:15 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/17 13:53:44 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkstart(const char *str, const char *set)
{
	int	i;
	int	j;
	int	x;
	int	res;

	i = 0;
	x = 1;
	res = 0;
	while (x != 0)
	{
		x = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (str[i] == set[j])
			{
				res++;
				x = 1;
			}
			j++;
		}
		i++;
	}
	return (res);
}

static int	ft_checkend(const char *str, const char *set)
{
	int	i;
	int	j;
	int	x;
	int	res;

	i = ft_strlen(str) - 1;
	x = 1;
	res = 0;
	while (x != 0)
	{
		x = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (str[i] == set[j])
			{
				res++;
				i--;
				x = 1;
			}
			j++;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	char	*res;
	int		i;
	int		index;

	start = ft_checkstart(str, set);
	end = ft_checkend(str, set) + 1;
	res = malloc(sizeof(char) * (end - start) + 1);
	if (!res)
		return (NULL);
	i = start;
	index = 0;
	while (i < end)
	{
		res[index] = str[i];
		index++;
		i++;
	}
	res[index] = '\0';
	return (res);
}

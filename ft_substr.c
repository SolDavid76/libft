/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:23:35 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/23 15:53:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sublen(char const *str, unsigned int start, size_t len)
{
	int		res;
	size_t	i;

	res = 0;
	i = 0;
	while (start < ft_strlen(str) && i < len)
	{
		res++;
		start++;
		i++;
	}
	return (res);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	res = malloc(sizeof(char) * (sublen(str, start, len) + 1));
	if (!res)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(str) && j < len)
	{
		res[j] = str[i];
		i++;
		j++;
	}
	res[j] = 0;
	return (res);
}

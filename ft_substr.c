/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:23:35 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/22 15:59:25 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i >= start && j < len)
		{
			res[i] = str[j];
			j++;
		}
		i++;
	}
	res[i] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:42:15 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 16:52:21 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i] == s2[j] && i < len)
		{
			if (s2[j] == '\0')
				return (&((char *)s1)[j]);
			i++;
			j++;
		}
		i++;
	}
	return (&((char *)s1)[j]);
}

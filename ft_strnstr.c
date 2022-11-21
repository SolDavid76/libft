/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:42:15 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/21 11:42:43 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2len;

	if (s2 == NULL || s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	s2len = ft_strlen(s2) - 1;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i] == s2[j] && i < len)
		{
			if (j == s2len)
				return ((char *)s1 + (i - j));
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}

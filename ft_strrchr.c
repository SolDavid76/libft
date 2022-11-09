/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:39:01 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 11:03:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		len;
	int		*res;

	i = 0;
	len = ft_strlen(str);
	while (i != 0)
	{
		i--;
		if (str[i] == (unsigned char)c)
			return (&str[i]);
	}
	return (NULL);
}

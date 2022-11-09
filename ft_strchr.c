/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:30 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 10:54:29 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

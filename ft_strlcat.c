/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:39 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/08 10:47:31 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest < size)
		len_src += len_dest;
	else
		len_src += size;
	if (size > 0)
	{
		while (src[i] && (i + len_dest) < (size - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len_src);
}

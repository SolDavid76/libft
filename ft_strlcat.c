/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:39 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/24 10:18:13 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;

	i = 0;
	if (!size)
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < len_dest + 1)
		return (size + len_src);
	if (size > len_dest + 1)
	{
		while (src[i] && (len_dest + i + 1) < size)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}

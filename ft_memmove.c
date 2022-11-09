/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:47:24 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 10:51:59 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!src && !dst)
		return (0);
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		return (dst);
	}
	i = 0;
	while (len--)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

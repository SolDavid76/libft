/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:32:39 by djanusz           #+#    #+#             */
/*   Updated: 2022/09/11 19:58:20 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] =((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

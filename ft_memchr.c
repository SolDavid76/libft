/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:03:16 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 10:55:53 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)p)[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (0);
}

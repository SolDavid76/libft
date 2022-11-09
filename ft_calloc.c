/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:50:05 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 17:41:09 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t		i;
	void		*res;

	res = malloc(n * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)res)[i] = 0;
		i++;
	}
	return (res);
}

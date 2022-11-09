/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:50:05 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 11:12:19 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int		i;
	void	*res;

	res = malloc(n * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		res[i] = NULL;
		i++;
	}
	return (res);
}

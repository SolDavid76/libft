/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:33:07 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/22 15:42:36 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long int x)
{
	size_t	res;

	res = 1;
	if (x < 0)
	{
		x = -x;
		res++;
	}
	while (x > 9)
	{
		x /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int x)
{
	int			i;
	char		*res;
	long int	nb;

	nb = x;
	i = intlen((long int)x);
	res = malloc(sizeof(char) * (i + 1));
	res[i] = '\0';
	if (!res)
		return (NULL);
	if (x < 0)
	{
		nb = -(long int)x;
		res[0] = '-';
	}
	while (i > 0)
	{
		i--;
		if (res[i] == '-')
			return (res);
		res[i] = ((nb % 10) + 48);
		nb /= 10;
	}
	return (res);
}

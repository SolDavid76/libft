/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:33:07 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/23 16:44:19 by djanusz          ###   ########.fr       */
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

static char	*itoa_aux(char *res, long int nb, int len, int start)
{
	while (len >= start)
	{
		res[len] = ((nb % 10) + 48);
		nb /= 10;
		len--;
	}
	return (res);
}

char	*ft_itoa(int x)
{
	char		*res;
	int			len;
	int			start;
	long int	nb;

	nb = x;
	len = intlen((long int)nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	if (x < 0)
	{
		nb = -(long int)x;
		res[0] = '-';
		start = 1;
	}
	else
		start = 0;
	return (itoa_aux(res, nb, len, start));
}

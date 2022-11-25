/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:57:00 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/25 10:37:05 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!str || !f)
		return (NULL);
	res = ft_strdup(str);
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		res[i] = f(i, str[i]);
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:30:51 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/09 10:56:44 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *str)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!res)
		return (0);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

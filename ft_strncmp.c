/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:54:17 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/22 13:50:36 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *x, const char *y, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((x[i] || y[i]) && (x[i] == y[i]) && i < n - 1)
		i++;
	return ((unsigned char)x[i] - (unsigned char)y[i]);
}

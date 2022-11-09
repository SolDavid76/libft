/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:47:49 by djanusz           #+#    #+#             */
/*   Updated: 2022/09/11 20:03:22 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char *)p)[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

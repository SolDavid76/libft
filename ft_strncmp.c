/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:54:17 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/14 11:51:51 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *x, char *y, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((x[i] || y[i]) && (x[i] == y[i]) && i < n - 1)
		i++;
	return ((unsigned char)x[i] - (unsigned char)y[i]);
}

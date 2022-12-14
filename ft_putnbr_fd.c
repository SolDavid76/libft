/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:59:00 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/16 11:46:10 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int x, int fd)
{
	int			digit;
	long int	nb;

	nb = (long int)x;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		digit = nb % 10;
		nb = nb / 10;
		ft_putnbr_fd(nb, fd);
		ft_putchar_fd(digit + 48, fd);
	}
}

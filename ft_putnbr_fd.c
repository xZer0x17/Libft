/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:20:09 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:09:30 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write (fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write (fd, "-", 1);
		nb = nb * -1;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + '0', fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
		return ;
	}
}

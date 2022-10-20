/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:22:19 by alflores          #+#    #+#             */
/*   Updated: 2022/10/20 21:12:22 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_neg(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static long	str_len(long n)
{
	long	len;
	long	aux;
	
	len = 0;
	aux = 0;
	if (n == 0)
		return (1); 
	if (n < 0)
	{
		n = ft_neg(n);;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	long	i;

	nb = ft_neg((long)n);
	i = str_len((long)n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if(!str)
		return (0);
	str[i--] = '\0';
	while (i >= 0)
	{
		if (n < 0 && i == 0)
			str[i--] = '-';
		else
		{
			str[i--] = (nb % 10) + '0';
			nb = nb / 10;
		}
	}
	return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:16:19 by alflores          #+#    #+#             */
/*   Updated: 2022/11/29 21:01:05 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	ft_sol(unsigned long num, int neg)
{
	unsigned long	aux;

	aux = 9223372036854775807;
	if (num > aux + 1 && neg == -1)
		return (0);
	else if (num > aux && neg == 1)
		return (-1);
	return (num);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	unsigned long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	if (str[i] == '-' && str[i] != '\0')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+' && str[i] != '\0')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (ft_sol(num, neg) * neg);
}

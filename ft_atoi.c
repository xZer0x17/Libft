/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:16:19 by alflores          #+#    #+#             */
/*   Updated: 2022/10/12 18:18:25 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		signo;
	size_t	sol;

	i = 0;
	signo = 0;
	sol = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	if (str[i] == '-' && str[i] != '\0')
	{
		signo++;
		i++;
	}
	else if (str[i] == '+' && str[i] != '\0')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		sol = sol * 10 + (str[i] - '0');
		i++;
	}
	if (signo == 0)
		return (sol);
	else
		return (sol * -1);
}

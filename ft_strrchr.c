/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:58:36 by alflores          #+#    #+#             */
/*   Updated: 2022/10/20 21:28:31 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	while (i <= len)
		i++;
	while (--i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}	
	return (0);
}

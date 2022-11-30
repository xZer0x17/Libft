/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:57:28 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:38:09 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	comp;

	comp = 0;
	i = 0;
	while (((char *)str)[i] != '\0' && comp == 0)
	{
		if (((char *)str)[i] == (char)c)
		{
			return ((char *)&str[i]);
			comp = 1;
		}
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

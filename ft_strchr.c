/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:57:28 by alflores          #+#    #+#             */
/*   Updated: 2022/10/12 17:58:10 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
	int i;
	int comp;

	comp = 0;
	i = 0;
	while (((char*)str)[i] != '\0' && comp == 0)
	{
		if (((char*)str)[i] == c)
		{
			return ((char*)&str[i]);
			comp = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
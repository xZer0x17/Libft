/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:01:35 by zer0              #+#    #+#             */
/*   Updated: 2022/09/26 14:08:55 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdlib.h>

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

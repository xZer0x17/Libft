/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:31:58 by zer0              #+#    #+#             */
/*   Updated: 2022/09/26 14:15:14 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strrchr(const char *str, int c)
{
	int longitud;
	int flag;

	flag = 0;
	longitud = ft_strlen(str);
	while (longitud >= 0 && flag == 0)
	{
		if (str[longitud] == c)
		{
			return ((char*)&str[longitud]);
			flag = 1;
		}
		longitud--;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:58:36 by alflores          #+#    #+#             */
/*   Updated: 2022/10/12 18:12:17 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strlen(const char *str);

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

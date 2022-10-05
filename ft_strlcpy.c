/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:04:01 by zer0              #+#    #+#             */
/*   Updated: 2022/09/19 11:07:57 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t lendest)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != '\0')
	{
		len = ft_strlen(src);
		if (dest != '\0' && lendest != 0)
		{
			i = 0;
			while ((i < len) && i < (lendest - 1))
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (len);
}
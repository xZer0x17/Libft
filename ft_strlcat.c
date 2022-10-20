/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:16:09 by zer0              #+#    #+#             */
/*   Updated: 2022/10/20 21:39:04 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	i;
	size_t	j;

	i = 0;
	if (!dest || dest[0] == '\0')
		lendest = 0;
	else
		lendest = (size_t)ft_strlen(dest);
	j = lendest;
	if (size <= lendest || size <= 0)
		return (ft_strlen(src) + size);
	while (*src != '\0' &&  i < (size - lendest - 1))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (lendest + ft_strlen(src));
}

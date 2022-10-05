/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:16:09 by zer0              #+#    #+#             */
/*   Updated: 2022/10/05 18:58:08 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	i = 0;
	lendest = (size_t)ft_strlen(dest);
	lensrc = (size_t)ft_strlen(src);
	j = lendest;
	if (destsize <= lendest || destsize <= 0)
		return (lensrc + destsize);
	while (*src != '\0' &&  i < (destsize - lendest - 1))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (lendest + lensrc);
}

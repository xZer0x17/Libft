/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:55:47 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:31:19 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	i = 0;
	diff = 0;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}

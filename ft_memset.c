/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:00:26 by zer0              #+#    #+#             */
/*   Updated: 2022/11/10 18:08:58 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = str;
	while (i < n)
		aux[i++] = (unsigned char)c;
	return (str);
}

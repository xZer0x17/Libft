/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:07:47 by zer0              #+#    #+#             */
/*   Updated: 2022/09/19 11:07:52 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

charft_strnstr(const char *dest, const char *src, size_t i)
{
	int	len;
	int	aux;
	char *a;

	a = dest;
	aux = 0;
	len = ft_strlen(src);
	while (aux < len)
	{
		a[aux] = src[aux];
		aux++;
	}
	a[aux] = '\0';
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:14:23 by alflores          #+#    #+#             */
/*   Updated: 2022/10/12 22:18:15 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char			*aux;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len <= (size_t)ft_strlen(s))
		aux = (char *)malloc(sizeof(char) * (len + 1));
	else
		aux = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aux)
		return (0);
	while (s[j] != '\0' && i < len)
	{
		if (j >= start)
			aux[i++] = s[j];
		j++;
	}
	aux[i] = '\0';
	return (aux);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:52:07 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:58:36 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	char const	*aux;
	char		*aux2;

	if (!s1 || !set)
		return (0);
	i = ft_strlen(s1);
	aux = s1;
	while (*aux && ft_strchr(set, *aux) != 0)
	{
		aux++;
		i--;
	}
	while (i >= 0 && *aux && ft_strchr(set, aux[i]) != 0)
		i--;
	++i;
	aux2 = ft_substr(aux, 0, i);
	if (!aux2)
		return (0);
	return (aux2);
}

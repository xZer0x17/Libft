/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:27:43 by zer0              #+#    #+#             */
/*   Updated: 2022/10/13 19:24:05 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_spaces(char c)
//Para los espacios voy a hacerlos con comprobantes
{
	if ( c == 10 || c == 9 || c == 32)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

int	count_strings(char *str)
//Recorre el string "limpiandola"
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_spaces(str[i]))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_spaces(str[i]))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str)
//Distancia hasta el primer espacio
{
	int	i;

	i = 0;
	while (str[i] && !check_spaces(str[i]))
		i++;
	return (i);
}

char	*ft_word(char *str)
//Devuelve la primera palabra sin separadores
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_spaces(*str))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str);
			i++;
		}
		while (*str && !check_spaces(*str))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
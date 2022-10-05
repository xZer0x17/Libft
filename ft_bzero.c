/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:28:16 by zer0              #+#    #+#             */
/*   Updated: 2022/10/05 18:16:03 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<strings.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*aux;

	aux = str;
	if (n == 0)
		return;	
	while (n > 0)
	{
		*aux = '\0';
		aux++;
		n--;
	}
}

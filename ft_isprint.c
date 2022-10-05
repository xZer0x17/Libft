/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:51:49 by zer0              #+#    #+#             */
/*   Updated: 2022/09/19 11:07:40 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);	
}

/*
int main ()
{
    printf("\nEl valor es: %d", ft_isalnum('a'));
    printf("\nEl valor es: %d", isalnum('a'));
}
*/
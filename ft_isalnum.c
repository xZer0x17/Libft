/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:43:27 by zer0              #+#    #+#             */
/*   Updated: 2022/09/19 11:07:45 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else if (c >= 48 && c <= 57)
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
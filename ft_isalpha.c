/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:22:42 by zer0              #+#    #+#             */
/*   Updated: 2022/09/19 11:07:55 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (c);
    return (0);
}

/*
int main ()
{
    printf("\nEl valor es: %d", ft_isalpha('a'));
    printf("\nEl valor es: %d", isalpha('a'));
}
*/
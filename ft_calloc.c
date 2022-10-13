/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:02:36 by zer0              #+#    #+#             */
/*   Updated: 2022/10/11 11:06:05 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n);

void    *ft_calloc(size_t count, size_t size)
{
    void    *aux;

    aux = malloc(count * size);
    if (!aux)
        return (0);
    ft_bzero(aux, size * count);
    return (aux);
}
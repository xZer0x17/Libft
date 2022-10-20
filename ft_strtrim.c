/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:52:07 by alflores          #+#    #+#             */
/*   Updated: 2022/10/20 21:55:01 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    //TODO: necesito eleminar los espacios de un string
    size_t      i;
    char const  *aux;
    char        *aux2;

    if (!s1 || !set) //Control de errores
        return (0);
    i = ft_strlen(s1);//Tamaño del string que nos pasan
    aux = s1; //Lo copiamos en un array donde podamos iterar
    while (*aux && ft_strchr(set, *aux) != 0)
    //Para que entre la bucle tiene que existir el array que itera.
    //Y tiene que estar set en la funcioón
    {
        aux++;
        i--;
    }
    //Ubicas el inicio y el final de set.
    while (i >= 0 && *aux && ft_strchr(set, aux[i]) != 0)
        i--;
    
    ++i;
    aux2 = ft_substr(aux, 0, i);
    if (!aux2)
        return (0);
    return (aux2); 
}

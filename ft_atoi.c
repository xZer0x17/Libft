/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:41:55 by zer0              #+#    #+#             */
/*   Updated: 2022/10/11 10:58:10 by zer0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signo;
    int sol;

    i = 0;
    signo = 0;
    sol = 0;
    while ((((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')) && str[i] != '\0')
        i++;
    if (str[i] == '-' && str[i] != '\0')
    {
        signo++;
        i++;
    }
    else if (str[i] == '+' && str[i] != '\0')
        i++;
    while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
        sol = sol * 10 + (str[i] - '0');
        i++;
    }
    if (signo == 0)
        return (sol);
    else
        return (sol * -1);
}
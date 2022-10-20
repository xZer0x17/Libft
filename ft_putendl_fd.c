/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:43 by alflores          #+#    #+#             */
/*   Updated: 2022/10/20 20:25:36 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

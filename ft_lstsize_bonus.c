/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:19:59 by alflores          #+#    #+#             */
/*   Updated: 2022/10/21 20:32:36 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

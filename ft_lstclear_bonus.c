/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:24:51 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:29:52 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux2;

	if (!lst || !del)
		return ;
	aux = *lst;
	while (aux)
	{
		aux2 = aux->next;
		ft_lstdelone(aux, del);
		aux = aux2;
	}
	*lst = 0;
}

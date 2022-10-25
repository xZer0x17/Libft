/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zer0 <zer0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:50:46 by zer0              #+#    #+#             */
/*   Updated: 2022/10/25 14:51:13 by zer0             ###   ########.fr       */
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

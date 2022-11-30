/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:42:07 by alflores          #+#    #+#             */
/*   Updated: 2022/11/10 18:29:38 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = NULL;
	if (*lst == 0)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}

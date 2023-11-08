/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:25:49 by marherra          #+#    #+#             */
/*   Updated: 2023/09/21 13:11:09 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pop;
	t_list	*aux;

	aux = *lst;
	if (!(aux))
		return ;
	while (aux)
	{
		pop = aux->next;
		del(aux->content);
		free(aux);
		aux = pop;
	}
	*lst = NULL;
}

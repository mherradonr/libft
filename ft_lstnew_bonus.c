/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:35:42 by marherra          #+#    #+#             */
/*   Updated: 2023/09/20 14:53:07 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pb;

	pb = (t_list *)malloc(sizeof(t_list));
	if (!pb)
		return (NULL);
	pb->content = content;
	pb->next = NULL;
	return (pb);
}

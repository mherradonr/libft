/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:50:20 by marherra          #+#    #+#             */
/*   Updated: 2023/09/19 18:46:37 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	longitud;

	longitud = ft_strlen((char *)str);
	while (longitud >= 0)
	{
		if (str[longitud] == (char)c)
		{
			return ((char *)&str[longitud]);
		}
		longitud--;
	}
	return (NULL);
}

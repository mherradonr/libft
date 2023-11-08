/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:14:07 by marherra          #+#    #+#             */
/*   Updated: 2023/09/18 12:38:25 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*m;
	int		len;
	int		i;

	len = ft_strlen(str);
	m = (char *) malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!m)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:02:16 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:08:55 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*s_holder;
	int				index;

	s_holder = (unsigned char *)s;
	index = ft_strlen((char *)s);
	if ((unsigned char)c == '\0')
		return ((char *)s_holder + index);
	index--;
	while (index >= 0)
	{
		if (s_holder[index] == (unsigned char)c)
			return ((char *)s_holder + index);
		index--;
	}
	return (NULL);
}

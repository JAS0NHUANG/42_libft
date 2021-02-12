/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:52:27 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 02:10:32 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_holder;
	size_t			index;

	s_holder = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (s_holder[index] == (unsigned char)c)
			return (s_holder + index);
		index++;
	}
	return (NULL);
}

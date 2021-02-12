/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:52:17 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:40:22 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*dst_holder;
	unsigned char	*src_holder;

	dst_holder = (unsigned char *)dst;
	src_holder = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dst_holder[index] = src_holder[index];
		if (src_holder[index] == (unsigned char)c)
			return (dst + index + 1);
		index++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:24:45 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:50:11 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*dst_holder;
	unsigned char	*src_holder;
	size_t			index;
	size_t			src_len;

	index = 0;
	src_len = ft_strlen(src);
	dst_holder = (unsigned char *)dst;
	src_holder = (unsigned char *)src;
	if (dstsize == 0)
		return (src_len);
	while (index < dstsize - 1 && src_holder[index])
	{
		dst_holder[index] = src_holder[index];
		index++;
	}
	dst_holder[index] = '\0';
	return (src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:21:39 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:49:17 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			index;
	size_t			src_len;
	size_t			dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	index = dst_len;
	if (dstsize == 0 || dstsize < dst_len)
		return (dstsize + src_len);
	while (index < dstsize - 1 && src[index - dst_len])
	{
		dst[index] = src[index - dst_len];
		index++;
	}
	dst[index] = '\0';
	return (src_len + dst_len);
}

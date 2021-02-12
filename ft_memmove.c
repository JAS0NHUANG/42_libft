/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:53:22 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:58:07 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*dst_holder;
	unsigned char	*src_holder;

	index = 0;
	dst_holder = (unsigned char *)dst;
	src_holder = (unsigned char *)src;
	if (!src_holder && !dst_holder)
		return (0);
	while (index < len)
	{
		if (src_holder > dst_holder)
			dst_holder[index] = src_holder[index];
		else
			dst_holder[len - index - 1] = src_holder[len - index - 1];
		index++;
	}
	return (dst);
}

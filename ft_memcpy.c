/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:53:06 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:53:20 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*dest_holder;
	unsigned char	*src_holder;

	index = 0;
	dest_holder = (unsigned char *)dest;
	src_holder = (unsigned char *)src;
	if (!src && !dest)
		return (dest);
	while (index < n)
	{
		dest_holder[index] = src_holder[index];
		index++;
	}
	return (dest);
}

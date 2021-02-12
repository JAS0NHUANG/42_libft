/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:52:51 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:41:12 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_holder;
	unsigned char	*s2_holder;
	size_t			index;

	s1_holder = (unsigned char *)s1;
	s2_holder = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s1_holder[index] != s2_holder[index])
			return (s1_holder[index] - s2_holder[index]);
		index++;
	}
	return (0);
}

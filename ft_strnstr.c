/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:52:22 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/15 16:43:11 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index1;
	size_t	index2;
	size_t	needle_len;

	index1 = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || needle[index1] == 0)
		return ((char *)haystack);
	while (haystack[index1] && index1 < len)
	{
		index2 = 0;
		if (haystack[index1] == needle[index2] && index1 < len)
		{
			while ((haystack[index1 + index2] == needle[index2]) && \
					(index1 + index2 < len) && \
					needle[index2])
				index2++;
			if (index2 == needle_len)
				return ((char *)haystack + index1);
		}
		index1++;
	}
	return (NULL);
}

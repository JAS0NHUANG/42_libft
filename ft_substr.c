/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:25:17 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 15:34:44 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	s_len;
	char	*result;

	index = 0;
	s_len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if ((size_t)start >= s_len)
	{
		result[0] = '\0';
		return (result);
	}
	while (s[index + start] && index < len)
	{
		result[index] = s[index + start];
		index++;
	}
	result[index] = '\0';
	return (result);
}

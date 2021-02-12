/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:11:25 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:11:26 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	index = 0;
	result = (char *)malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (index < (s1_len + s2_len))
	{
		if (index < s1_len)
			result[index] = s1[index];
		else
			result[index] = s2[index - s1_len];
		index++;
	}
	result[index] = '\0';
	return (result);
}

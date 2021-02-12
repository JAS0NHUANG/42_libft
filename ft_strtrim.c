/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:15:07 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/18 10:22:19 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_index;
	size_t	result_len;
	size_t	result_index;
	char	*result;

	s1_index = 0;
	result_index = 0;
	result_len = ft_strlen(s1);
	while (ft_strchr(set, s1[s1_index]) && result_len > 0)
	{
		s1_index++;
		result_len--;
	}
	while (ft_strchr(set, s1[s1_index + result_len - 1]) && result_len > 0)
		result_len--;
	result = (char *)malloc((result_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (result_index < result_len)
	{
		result[result_index] = s1[s1_index + result_index];
		result_index++;
	}
	result[result_index] = '\0';
	return (result);
}

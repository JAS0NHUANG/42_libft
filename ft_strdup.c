/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:48:04 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:48:36 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	char	*result;

	index = 0;
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}

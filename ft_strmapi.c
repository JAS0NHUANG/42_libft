/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:12:51 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:12:53 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		str_len;
	char	*result;

	index = 0;
	str_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}

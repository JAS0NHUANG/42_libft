/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:51:58 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 12:37:20 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*s1_holder;
	unsigned char	*s2_holder;

	index = 0;
	s1_holder = (unsigned char *)s1;
	s2_holder = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (index < n && \
			s1_holder[index] == s2_holder[index] && \
			s1_holder[index])
		index++;
	if (index == n)
		return (0);
	return (s1_holder[index] - s2_holder[index]);
}

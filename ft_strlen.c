/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:50:38 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:00:27 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t			count;
	unsigned char	*s_holder;

	count = 0;
	s_holder = (unsigned char *)s;
	while (s_holder[count])
		count++;
	return (count);
}

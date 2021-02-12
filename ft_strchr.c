/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:02:16 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 10:47:26 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char *s_holder;

	s_holder = (unsigned char *)s;
	while (*s_holder)
	{
		if (*s_holder == (unsigned char)c)
			return ((char *)s_holder);
		s_holder++;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s_holder);
	return (0);
}

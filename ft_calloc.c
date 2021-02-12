/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:34:23 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 02:06:08 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = count * size;
	result = malloc(total_size);
	if (!result)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:30:50 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 15:14:34 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

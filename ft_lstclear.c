/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:30:27 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:33:49 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*holder;

	if (!lst)
		return ;
	while (*lst)
	{
		holder = (*lst)->next;
		del(*lst);
		*lst = holder;
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:31:38 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/18 23:36:21 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_item;
	t_list	*result_lst;

	if (!lst || !f)
		return (NULL);
	result_lst = NULL;
	while (lst)
	{
		new_item = ft_lstnew((*f)(lst->content));
		if (!new_item)
		{
			ft_lstclear(&result_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&result_lst, new_item);
		lst = lst->next;
	}
	return (result_lst);
}

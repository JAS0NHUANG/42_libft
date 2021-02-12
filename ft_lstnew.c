/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:31:53 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:32:28 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *lst_item;

	lst_item = malloc(sizeof(t_list));
	if (!lst_item)
		return (NULL);
	lst_item->content = content;
	lst_item->next = NULL;
	return (lst_item);
}

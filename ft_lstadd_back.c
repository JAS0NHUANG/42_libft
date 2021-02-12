/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 02:04:47 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 02:04:48 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_holder;

	lst_holder = *lst;
	if (!lst_holder)
	{
		*lst = new;
		return ;
	}
	while (lst_holder && lst_holder->next)
		lst_holder = lst_holder->next;
	lst_holder->next = new;
	return ;
}

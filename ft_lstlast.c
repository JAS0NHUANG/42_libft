/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:31:28 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/14 11:33:17 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_holder;

	lst_holder = lst;
	while (lst_holder && lst_holder->next)
		lst_holder = lst_holder->next;
	return (lst_holder);
}

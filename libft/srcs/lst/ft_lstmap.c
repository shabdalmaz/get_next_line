/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:47:14 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/22 15:43:21 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;

	n_list = NULL;
	if ((*f) == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if ((n_node = ft_lstnew((*f)(lst->content))) != NULL)
			ft_lstadd_back(&n_list, n_node);
		else
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (n_list);
}

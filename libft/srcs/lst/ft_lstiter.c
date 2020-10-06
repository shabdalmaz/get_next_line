/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:46:58 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/22 15:43:31 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL && (*f) != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

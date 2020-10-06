/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:46:16 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/22 15:41:35 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstadd_back(t_list **alst, t_list *new_node)
{
	if (new_node != NULL)
	{
		if (alst == NULL)
			alst = &new_node;
		else if (*alst == NULL)
			*alst = new_node;
		else
			ft_lstlast(*alst)->next = new_node;
	}
}

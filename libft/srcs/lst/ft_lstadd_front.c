/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:46:26 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/22 15:41:55 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstadd_front(t_list **alst, t_list *new_node)
{
	if (new_node != NULL)
	{
		if (alst != NULL)
		{
			new_node->next = *alst;
			*alst = new_node;
		}
		else
			alst = &new_node;
	}
}

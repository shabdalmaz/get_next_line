/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:43:07 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:43:08 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_count.h"

size_t	ft_cntdig(int n, int base)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		n /= base;
		len += 1;
	}
	return (len);
}

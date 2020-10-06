/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:42:36 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/01 19:05:56 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"
#include "ft_ctype.h"

int	ft_atoi(const char *nptr)
{
	int	ret;
	int	sign;

	ret = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr += 1;
	if (*nptr == '+' || *nptr == '-')
	{
		sign = ',' - *nptr;
		nptr += 1;
	}
	while (ft_isdigit(*nptr))
	{
		ret = ret * 10 + *nptr - '0';
		nptr += 1;
	}
	return (ret * sign);
}

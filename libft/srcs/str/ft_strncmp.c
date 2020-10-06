/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:52 by ashabdan          #+#    #+#             */
/*   Updated: 2020/08/31 18:52:51 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	while (n && *un_s1 != '\0' && *un_s2 != '\0')
	{
		if (*un_s1 != *un_s2)
			break ;
		n -= 1;
		un_s1 += 1;
		un_s2 += 1;
	}
	if (n == 0 || *un_s1 - *un_s2 == 0)
		return (0);
	return (*un_s1 - *un_s2 > 0 ? 1 : -1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntsubstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:43:15 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/09 12:45:00 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_count.h"

size_t	ft_cntsubstr(const char *s, char delim)
{
	size_t	substrs;
	char	is_substr;

	substrs = 0;
	is_substr = 0;
	while (*s)
	{
		if (*s != delim && is_substr == 0)
		{
			substrs += 1;
			is_substr = 1;
		}
		else if (*s == delim)
			is_substr = 0;
		s += 1;
	}
	return (substrs);
}

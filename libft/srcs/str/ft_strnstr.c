/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:50:59 by ashabdan          #+#    #+#             */
/*   Updated: 2020/08/31 18:00:48 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	match;
	size_t	checkpoint;

	i = 0;
	match = 0;
	checkpoint = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < n && *(haystack + i) && *(needle + match))
	{
		if (*(haystack + i) == *needle)
			checkpoint = i;
		if (*(haystack + i) == *(needle + match))
			match += 1;
		else if (match > 0)
		{
			match = 0;
			i = checkpoint - 1;
		}
		i += 1;
	}
	return (!*(needle + match) ? (char *)haystack + i - match : NULL);
}

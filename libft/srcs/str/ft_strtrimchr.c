/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:50:23 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:50:25 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strtrimchr(const char *s, char c)
{
	size_t	len;

	if (!s)
		return (NULL);
	len = 0;
	while (*s && *s == c)
		s += 1;
	len = ft_strlen(s);
	while (len && *(s + len - 1) == c)
		len -= 1;
	return (ft_substr(s, 0, len));
}

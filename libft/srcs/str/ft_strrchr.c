/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:58 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 16:55:57 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;

	last = ft_strlen(s);
	while (last && *(s + last) != (t_byte)c)
		last -= 1;
	return (*(s + last) == (t_byte)c ? (char *)s + last : NULL);
}

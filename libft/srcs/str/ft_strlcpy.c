/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:50:43 by ashabdan          #+#    #+#             */
/*   Updated: 2020/08/31 22:22:25 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_mem.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;

	if (dst == NULL || src == NULL)
		return (0);
	src_len = ft_strlen(src);
	if (dst_size != 0)
	{
		if (src_len < dst_size)
			ft_memmove(dst, src, src_len + 1);
		else
		{
			ft_memmove(dst, src, dst_size - 1);
			*(dst + dst_size - 1) = '\0';
		}
	}
	return (src_len);
}

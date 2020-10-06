/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:30 by ashabdan          #+#    #+#             */
/*   Updated: 2020/09/01 14:27:05 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_mem.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_size > dst_len)
	{
		ft_memmove(dst + dst_len, src, dst_size - dst_len - 1);
		*(dst + dst_size - 1) = '\0';
	}
	return (src_len + (dst_size > dst_len ? dst_len : dst_size));
}

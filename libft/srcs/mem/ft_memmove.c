/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:44 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:24:00 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	t_byte			*dst0;
	const t_byte	*src0;
	size_t			word_size;

	dst0 = (t_byte *)dst;
	src0 = (const t_byte *)src;
	word_size = sizeof(t_word);
	if (dst == src || n == 0)
		return (dst0);
	if ((t_word *)src < (t_word *)dst && (t_word *)src + n > (t_word *)dst)
	{
		while (n > word_size && (n -= word_size))
			*(t_word *)(dst + n) = *(t_word *)(src + n);
		while (n--)
			*(t_byte *)(dst + n) = *(t_byte *)(src + n);
		return (dst0);
	}
	return (ft_memcpy(dst0, src0, n));
}

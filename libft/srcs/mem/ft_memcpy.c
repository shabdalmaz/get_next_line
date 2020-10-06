/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:39 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:24:50 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte		*dst0;
	size_t		i;
	size_t		word_size;

	if (n <= 0 || dst == src)
		return (dst);
	word_size = sizeof(t_word);
	i = n / word_size;
	dst0 = (t_byte *)dst;
	while (i--)
	{
		*(t_word *)dst = *(t_word *)src;
		dst += word_size;
		src += word_size;
	}
	i = n % word_size;
	while (i--)
	{
		*(t_byte *)dst = *(t_byte *)src;
		dst += 1;
		src += 1;
	}
	return (dst0);
}

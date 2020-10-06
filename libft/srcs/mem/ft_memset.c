/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:51 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:24:28 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	t_byte	*dst0;
	t_byte	val;
	t_word	mask;
	size_t	i;
	size_t	word_size;

	dst0 = (t_byte *)dst;
	val = (t_byte)c;
	mask = (t_word)val;
	mask = (mask << 8) | mask;
	mask = (mask << 16) | mask;
	word_size = sizeof(t_word);
	i = n / word_size;
	while (i--)
	{
		*(t_word *)dst = mask;
		dst += word_size;
	}
	i = n % word_size;
	while (i--)
		*(t_byte *)dst++ = val;
	return (dst0);
}

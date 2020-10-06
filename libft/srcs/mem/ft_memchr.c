/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:03 by ashabdan          #+#    #+#             */
/*   Updated: 2020/08/31 18:00:08 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*c_ptr;
	t_word			mask;
	size_t			word_size;

	c_ptr = (const t_byte *)s;
	word_size = sizeof(t_word);
	if (n > word_size)
	{
		mask = (t_word)(t_byte)c;
		mask = (mask | (mask << 8)) | ((mask | (mask << 8)) << 16);
		while (n >= word_size)
		{
			if ((((*(t_word *)c_ptr ^ mask) - FST_BIT) \
			& ~(*(t_word *)c_ptr ^ mask) & LST_BIT))
				break ;
			n -= word_size;
			c_ptr += word_size;
		}
	}
	while (n && *c_ptr != (t_byte)c)
	{
		n -= 1;
		c_ptr += 1;
	}
	return (!n ? NULL : (void *)c_ptr);
}

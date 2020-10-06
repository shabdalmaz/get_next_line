/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:32 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:23:32 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	w_size;
	size_t	words;

	i = 0;
	w_size = sizeof(t_word);
	words = n / w_size;
	while (words)
	{
		if (*(t_word *)(s1 + i) != *(t_word *)(s2 + i))
			break ;
		i += w_size;
		words -= 1;
	}
	while (i < n)
	{
		if (*(t_byte *)(s1 + i) != *(t_byte *)(s2 + i))
			break ;
		i += 1;
	}
	return (i == n ? 0 : *(t_byte *)(s1 + i) - *(t_byte *)(s2 + i));
}

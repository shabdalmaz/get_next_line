/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:45 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:27:17 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

size_t	ft_strlen(const char *s)
{
	size_t	len;
	size_t	word_size;

	len = 0;
	word_size = sizeof(t_word);
	if (!((*(t_word *)(s + len) - FST_BIT) \
				& ~*(t_word *)(s + len) & LST_BIT))
		len += word_size;
	while (*(s + len))
		len += 1;
	return (len);
}

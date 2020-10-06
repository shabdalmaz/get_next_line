/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:51:16 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:51:18 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_str.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = NULL;
	if (s == NULL || !(ret = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (ft_strlen(s) > start)
		ft_memmove(ret, s + start, len);
	return (ret);
}

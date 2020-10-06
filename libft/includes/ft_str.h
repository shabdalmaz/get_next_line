/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:42:11 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:29:39 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H
# include <string.h>

typedef unsigned int	t_word;
typedef unsigned char	t_byte;
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t			ft_strlcat(char *dst, const char *src, size_t dst_size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
char			*ft_strdup(const char *s);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s, const char *set);
char			*ft_strtrimchr(const char *s, char c);
char			**ft_split(const char *s, char c);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

#endif

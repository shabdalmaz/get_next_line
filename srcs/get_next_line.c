/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 13:42:03 by ashabdan          #+#    #+#             */
/*   Updated: 2020/10/04 23:55:01 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*remexd(char *original, char *additional)
{
	char	*tmp_rem;

	if (original == NULL || additional == NULL)
		return (NULL);
	tmp_rem = ft_strjoin(original, additional);
	free(original);
	original = tmp_rem;
	tmp_rem = NULL;
	return (original);
}

static t_list	*remaining(int fd)
{
	static t_list	*rem_lst;
	t_list			*node;

	node = rem_lst;
	while (node != NULL)
	{
		if (node->fd == fd)
			return (node);
		node = node->next;
	}
	node = ft_lstnew(ft_strdup(""));
	node->fd = fd;
	ft_lstadd_front(&rem_lst, node);
	return (rem_lst);
}

static char		*isnewline(char *nl, char **rem)
{
	char	*ret;
	char	*tmp_rem;

	if (**rem == '\0')
		return (NULL);
	if (nl != NULL)
	{
		tmp_rem = ft_strdup(nl + 1);
		*nl = '\0';
	}
	ret = ft_strdup(*rem);
	free(*rem);
	*rem = (nl != NULL) ? tmp_rem : "";
	return (ret);
}

int				get_next_line(int fd, char **line)
{
	ssize_t			read_bytes;
	char			buf[BUFF_SIZE + 1];
	char			*nl;
	t_list			*rem;

	ft_bzero(buf, BUFF_SIZE + 1);
	rem = remaining(fd);
	if (fd < 0 || line == NULL || read(fd, 0, 0) == -1 || rem == NULL)
		return (-1);
	while (!(nl = ft_memchr(rem->content, '\n', ft_strlen(rem->content))))
	{
		if ((read_bytes = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		rem->content = remexd(rem->content, buf);
		ft_bzero(buf, BUFF_SIZE);
	}
	*line = isnewline(nl, (char **)&(rem->content));
	return ((read_bytes == 0 && *line == NULL) ? 0 : 1);
}

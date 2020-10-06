/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:57:25 by ashabdan          #+#    #+#             */
/*   Updated: 2020/10/05 00:03:09 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

#define OPEN_ERR -1
#define ARG_ERR 0
#define CLOSE_ERR 1
#define GNL_ERR 2

static void		print_error(int err_code)
{
	if (err_code == ARG_ERR)
		printf("Usage: ./gnl path_to_file\n");
	else if (err_code == OPEN_ERR)
		printf("File opening error\n");
	else if (err_code == CLOSE_ERR)
		printf("File closing error\n");
	else if (err_code == GNL_ERR)
		printf("GNL has failed\n");
	exit(EXIT_FAILURE);
}

int				main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	*read_line;

	if (argc != 2)
		print_error(ARG_ERR);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		print_error(OPEN_ERR);
	while ((ret = get_next_line(fd, &read_line)) > 0)
	{
		printf("%s\n", read_line);
		free(read_line);
	}
	printf("GNL RETURN: %d\n", ret);
	if (close(fd) == -1)
		print_error(CLOSE_ERR);
	return (0);
}

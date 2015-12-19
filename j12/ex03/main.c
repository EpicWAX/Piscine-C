/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 08:39:36 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/09 07:51:36 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"
#include <stdlib.h>

int		third_part_of_main_two(int i, int n2, int fd, char **av)
{
	int		n;
	char	*buf;

	n = 0;
	buf = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	while (read(fd, buf, BUF_SIZE))
	{
		buf[BUF_SIZE] = '\0';
		hexa_line_two(n2);
		hexa_trad_two(buf);
		n += 16;
		n2 += 16;
		if (size_files(i, av) % 16 != 0 && n == (size_files(i, av) / 16) * 16)
		{
			last_line_two(i, av, n2, fd);
			n2 += (size_files(i, av) % 16);
			close(fd);
			break ;
		}
		else if (size_files(i, av) % 16 == 0
				&& n == (size_files(i, av) / 16 * 16) && !av[++i])
			optimain_two(n2);
	}
	return (n2);
}

void	third_part_of_main(int ac, char **av)
{
	int		i;
	int		n2;
	int		fd;

	n2 = 0;
	i = 0;
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		bad_fds(fd, av, i);
		if (fd >= 0)
			n2 = third_part_of_main_two(i, n2, fd, av);
	}
}

int		second_part_of_main_two(int i, int n2, int fd, char **av)
{
	int		n;
	char	*buf;

	n = 0;
	buf = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	while (read(fd, buf, BUF_SIZE))
	{
		buf[BUF_SIZE] = '\0';
		hexa_line(n2);
		hexa_trad(buf);
		normal_line(buf);
		n += 16;
		n2 += 16;
		if (size_files(i, av) % 16 != 0 && n == (size_files(i, av) / 16) * 16)
		{
			last_line(i, av, n2, fd);
			n2 += (size_files(i, av) % 16);
			close(fd);
			break ;
		}
		else if (size_files(i, av) % 16 == 0
				&& n == (size_files(i, av) / 16 * 16) && !av[++i])
			optimain_one(n2);
	}
	return (n2);
}

void	second_part_of_main(int ac, char **av)
{
	int		i;
	int		n2;
	int		fd;

	i = 1;
	n2 = 0;
	fd = open(av[i], O_RDONLY);
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		bad_fds(fd, av, i);
		if (fd >= 0)
			n2 = second_part_of_main_two(i, n2, fd, av);
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		i;

	z_param(ac);
	i = 1;
	fd = open(av[i], O_RDONLY);
	if (open(av[i], O_RDONLY) < 0 && !av[2])
		bad_fds(fd, av, i);
	else if (ft_strcmp(av[1], S2) == 0)
		second_part_of_main(ac, av);
	else if (ft_strcmp(av[1], S2) != 0 && open(av[i], O_RDONLY) >= 0)
		third_part_of_main(ac, av);
	return (0);
}

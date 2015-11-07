/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 13:45:42 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/07 13:55:47 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

int		ft_atoi(char *str)
{
	int ret;
	int i;
	int s;

	ret = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str && str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (s * ret);
}

void	print_names(int i, int ac, char **av)
{
	int j;

	j = 0;
	if (ac > 4)
	{
		if (i > 3)
			write(1, "\n==> ", 5);
		else
			write(1, "==> ", 4);
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, " <==\n", 5);
	}
}

int		size_files(int i, char **av)
{
	int		fd2;
	int		size;
	char	buffer;

	size = 0;
	fd2 = open(av[i], O_RDONLY);
	while (read(fd2, &buffer, 1))
		size++;
	close(fd2);
	return (size);
}

void	disp_files(int i, int fd, int ac, char **av)
{
	char	buffer;
	int		offset;
	int		readed;
	int		size_file;

	size_file = size_files(i, av);
	readed = 0;
	offset = ft_atoi(av[2]);
	print_names(i, ac, av);
	if (av[2][0] == '+')
	{
		while (readed != offset - 1)
			readed += read(fd, &buffer, 1);
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
	}
	else
	{
		while (readed < (size_file - offset))
			readed += read(fd, &buffer, 1);
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
	}
}

int		main(int ac, char **av)
{
	int fd;
	int i;
	int j;

	i = 3;
	if (ac < 4)
		return (0);
	while (i < ac)
	{
		j = -1;
		fd = open(av[i], O_RDONLY);
		if (fd >= 0)
			disp_files(i, fd, ac, av);
		else
		{
			write(2, "ft_tail: ", 9);
			while (av[i][++j])
				write(2, &av[i][j], 1);
			write(2, ": No such file or directory\n", 28);
		}
		close(fd);
		i++;
	}
	return (0);
}

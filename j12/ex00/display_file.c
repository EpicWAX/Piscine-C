/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 02:30:25 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/06 09:31:53 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

int		ft_put_error(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*buf;

	if (ac == 1)
		return (ft_put_error("File missing name.\n"));
	if (ac > 2)
		return (ft_put_error("Too many arguments.\n"));
	fd = open(av[1], O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}

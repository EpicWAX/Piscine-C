/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 08:41:49 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/02 16:55:41 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	z_param(int ac)
{
	char	buf;

	if (ac < 2)
		while (read(0, &buf, 1) != 0)
			write(1, &buf, 1);
}

void	bad_fds(int fd, char **av, int i)
{
	if (fd < 0)
	{
		ft_putstr("hexdump: ");
		ft_putstr(av[i]);
		ft_putstr(": No such file or directory\n");
		if (!av[++i])
		{
			ft_putstr("hexdump: ");
			ft_putstr(av[--i]);
			ft_putstr(": Bad file descriptor\n");
		}
	}
}

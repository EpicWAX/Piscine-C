/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 09:44:31 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/06 15:15:20 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

void	ft_put_error(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
}

void	ft_print_stdin(void)
{
	char buf;

	while (read(0, &buf, 1) != 0)
		write(1, &buf, 1);
}

void	zero_param(char *av)
{
	ft_put_error("ft_cat: ");
	ft_put_error(av);
	ft_put_error(": No such file or directory\n");
}

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	*buf;

	i = 0;
	if (ac < 2)
		ft_print_stdin();
	else
	{
		while (++i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd >= 0)
				while (read(fd, &buf, 1) != 0)
					write(1, &buf, 1);
			else
				zero_param(av[i]);
			close(fd);
		}
	}
	return (0);
}

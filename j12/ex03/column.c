/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:24:48 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/04 09:40:41 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

void	hexa_line(int n)
{
	if (n == 0)
		ft_putstr("0000000");
	else if (n == 16 || n < 256)
		ft_putstr("000000");
	else if (n == 256 || n < 4096)
		ft_putstr("00000");
	else if (n == 4096 || n < 65536)
		ft_putstr("0000");
	else if (n == 65536 || n < 1048576)
		ft_putstr("000");
	else if (n == 1048576 || n < 16777216)
		ft_putstr("00");
	else if (n == 16777216 || n < 268435456)
		ft_putstr("0");
	ft_putnbr_base(n, HEXA);
}

void	hexa_line_two(int n)
{
	if (n == 0)
		ft_putstr("000000");
	else if (n == 16 || n < 256)
		ft_putstr("00000");
	else if (n == 256 || n < 4096)
		ft_putstr("0000");
	else if (n == 4096 || n < 65536)
		ft_putstr("000");
	else if (n == 65536 || n < 1048576)
		ft_putstr("00");
	else if (n == 1048576 || n < 16777216)
		ft_putstr("0");
	ft_putnbr_base(n, HEXA);
}

void	hexa_trad(char *buf)
{
	int	i;

	i = 0;
	ft_putstr("  ");
	while (buf && buf[i])
	{
		if (i == 8 || i == 16)
			ft_putchar(' ');
		if (buf[i] >= 0 && buf[i] <= 15)
			ft_putchar('0');
		ft_putnbr_base(buf[i], HEXA);
		ft_putchar(' ');
		i++;
	}
	if (ft_strlen(buf) < BUF_SIZE)
	{
		if (i <= 8)
			i = (ft_strlen(buf) * 3) - 1;
		else if (i > 8)
			i = (ft_strlen(buf) * 3);
		while (++i != 49)
			ft_putchar(' ');
	}
}

void	hexa_trad_two(char *buf)
{
	int	i;

	i = 0;
	ft_putchar(' ');
	while (buf && buf[i])
	{
		if (buf[i] >= 0 && buf[i] <= 15)
			ft_putchar('0');
		ft_putnbr_base(buf[i], HEXA);
		if (i < 15)
			ft_putchar(' ');
		i++;
	}
	if (ft_strlen(buf) < BUF_SIZE)
	{
		i = ft_strlen(buf) * 3;
		while (++i < 48)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	normal_line(char *buf)
{
	int	i;

	i = 0;
	ft_putchar(' ');
	while (buf && buf[i])
	{
		if (buf[i] == '\n' || buf[i] == '\t' || buf[i] == '\0')
			buf[i] = '.';
		i++;
	}
	ft_putchar('|');
	ft_putstr(buf);
	ft_putstr("|\n");
}

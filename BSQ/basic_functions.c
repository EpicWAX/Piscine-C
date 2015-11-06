/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:57:01 by sgaudin           #+#    #+#             */
/*   Updated: 2015/08/27 16:04:06 by sgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_atoi(char *str)
{
	int n;
	int i;
	int begin;

	begin = 0;
	while ((str[begin] >= 9 && str[begin] <= 13) || str[begin] == 32)
		begin = begin + 1;
	i = begin;
	if (str[i] == '-' || str[i] == '+')
		i = i + 1;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i = i + 1;
	}
	return (str[begin] == '-' ? -n : n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_putstr(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	write(1, str, ptr - str);
}

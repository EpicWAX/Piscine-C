/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiello <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 14:17:55 by aaiello           #+#    #+#             */
/*   Updated: 2015/08/16 18:10:43 by aaiello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_con_ic(int i)
{
	char c;

	c = '0' + i;
	return (c);
}

int		ft_con_ci(char c)
{
	int i;

	i = c - 48;
	return (i);
}

void	ft_print_char(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_print_char(str[i]);
		i++;
	}
	return ;
}

void	ft_print_sudoku(int sudoku[9][9])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			c = ft_con_ic(sudoku[i][j]);
			ft_print_char(c);
			ft_print_char(' ');
			j++;
		}
		c = ft_con_ic(sudoku[i][j]);
		ft_print_char(c);
		ft_print_char('\n');
		i++;
	}
	return ;
}

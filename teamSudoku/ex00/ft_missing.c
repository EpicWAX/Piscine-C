/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_missing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiello <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 14:33:31 by aaiello           #+#    #+#             */
/*   Updated: 2015/08/16 18:23:39 by aaiello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_missing_l(int k, int sudoku[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (sudoku[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		ft_missing_c(int k, int sudoku[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		ft_missing_b(int k, int sudoku[9][9], int i, int j)
{
	int ii;
	int jj;

	ii = i - (i % 3);
	jj = j - (j % 3);
	i = ii;
	while (i < ii + 3)
	{
		j = jj;
		while (j < jj + 3)
		{
			if (sudoku[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_missing(int sudoku[9][9], int i, int j, int k)
{
	int c;

	c = ft_missing_l(k, sudoku, i) + ft_missing_c(k, sudoku, j);
	c = c + ft_missing_b(k, sudoku, i, j);
	return (c);
}

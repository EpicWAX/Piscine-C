/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiello <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 14:55:37 by aaiello           #+#    #+#             */
/*   Updated: 2015/08/16 19:49:13 by aaiello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_missing(int sudoku[9][9], int i, int j, int k);
int		ft_double(char **argv);

int		ft_check_sudoku(int sudoku[9][9], int position, int k)
{
	int		l;
	int		i;
	int		j;

	if (position == 81)
		return (1);
	i = position / 9;
	j = position % 9;
	if (sudoku[i][j] != 0)
		return (ft_check_sudoku(sudoku, position + 1, k));
	l = 0;
	while (l++ <= 9)
	{
		if (ft_missing(sudoku, i, j, k) == 3)
		{
			sudoku[i][j] = k;
			if (ft_check_sudoku(sudoku, position + 1, k) == 1)
				return (1);
		}
		k++;
		if (k == 10)
			k = 1;
	}
	sudoku[i][j] = 0;
	return (0);
}

int		ft_check_argv(char **argv, int i, int argc)
{
	int j;

	j = 0;
	while (argv[i][j] != '\0')
	{
		if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != 46)
			return (0);
		j++;
	}
	if (i > 0 && j == 9)
		ft_check_argv(argv, i - 1, argc);
	else if (i == 0 && j == 9)
		return (ft_double(argv));
	else
		return (0);
	return (1);
}

int		ft_diff(int sudoku[9][9], int copy[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (copy[i][j] != sudoku[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_copy(int sudoku[9][9], int copy[9][9])
{
	int i;
	int j;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 9)
		{
			copy[i][j] = sudoku[i][j];
		}
	}
	return ;
}

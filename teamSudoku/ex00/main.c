/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiello <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 16:59:16 by aaiello           #+#    #+#             */
/*   Updated: 2015/08/16 19:55:33 by aaiello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_sudoku(int sudoku[9][9]);
int		ft_check_sudoku(int sudoku[9][9], int position, int k);
int		ft_check_argv(char **argv, int i, int argc);
int		ft_diff(int sudoku[9][9], int copy[9][9]);
void	ft_copy(int sudoku[9][9], int copy[9][9]);
int		ft_missing(int sudoku[9][9], int i, int j, int k);

int		ft_print_error(void)
{
	write(1, "Erreur\n", 7);
	return (0);
}

int		ft_error(int argc, char **argv)
{
	if (argc != 10)
		return (ft_print_error());
	else if (ft_check_argv(argv, argc - 1, argc - 1) == 0)
		return (ft_print_error());
	return (1);
}

void	ft_initial(char **argv, int sudoku[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] >= 48 && argv[i + 1][j] <= 57)
				sudoku[i][j] = argv[i + 1][j] - 48;
			else
				sudoku[i][j] = 0;
			j++;
		}
		i++;
	}
	return ;
}

int		ft_double(char **argv)
{
	int i;
	int j;
	int test;
	int swap[9][9];

	i = 0;
	ft_initial(argv, swap);
	while (i++ < 10)
	{
		j = 0;
		while (j++ < 10)
		{
			test = swap[i][j];
			swap[i][j] = 0;
			if (ft_missing(swap, i, j, test) != 3 && test != 0)
				return (0);
			swap[i][j] = test;
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		sudoku[9][9];
	int		copy[9][9];
	int		i;

	if (ft_error(argc, argv) == 0)
		return (0);
	i = 1;
	while (i <= 9)
	{
		ft_initial(argv, sudoku);
		ft_check_sudoku(sudoku, 0, i);
		if (i == 2)
			ft_copy(sudoku, copy);
		else if (ft_diff(sudoku, copy) == 0 && i > 2)
			return (ft_print_error());
		i++;
	}
	ft_print_sudoku(sudoku);
	return (0);
}

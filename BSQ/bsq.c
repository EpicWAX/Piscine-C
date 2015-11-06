/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:26:38 by sgaudin           #+#    #+#             */
/*   Updated: 2015/08/27 15:16:55 by sgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**g_finale(char **grille, t_grid_items *items, int **grid_num)
{
	int		*max;
	int		i;
	int		j;
	int		i_debut;
	int		j_debut;

	i = 0;
	j = 0;
	max = bsq(grid_num, items);
	i_debut = max[1] - (max[0] - 1);
	j_debut = max[2] - (max[0] - 1);
	while (i < max[0])
	{
		j = 0;
		while (j < max[0])
		{
			grille[i + i_debut][j + j_debut] = items->rempli;
			j++;
		}
		i++;
	}
	return (grille);
}

int		*bsq(int **grid_num, t_grid_items *items)
{
	int		i;
	int		j;
	int		environs[3];
	int		min;
	int		*max;

	i = 1;
	while (i < items->lignes)
	{
		j = 0;
		while (j++ < items->colonnes)
		{
			if (grid_num[i][j] != 0)
			{
				environs[0] = grid_num[i - 1][j];
				environs[1] = grid_num[i][j - 1];
				environs[2] = grid_num[i - 1][j - 1];
				min = ft_min(environs, 3);
				grid_num[i][j] = min + 1;
			}
		}
		i++;
	}
	max = find_bsq(grid_num, items);
	return (max);
}

int		*find_bsq(int **grid_num, t_grid_items *items)
{
	int *max;
	int i;
	int j;

	max = (int*)malloc(sizeof(int) * 3);
	max[0] = 1;
	i = 0;
	max[1] = 0;
	max[2] = 0;
	while (i < items->lignes)
	{
		j = 0;
		while (j < items->colonnes)
		{
			if (grid_num[i][j] > max[0])
			{
				max[0] = grid_num[i][j];
				max[1] = i;
				max[2] = j;
			}
			j++;
		}
		i++;
	}
	return (max);
}

int		**init_grid_num(char **grille, t_grid_items *items)
{
	int		**grid_num;
	int		i;
	int		j;

	i = 0;
	grid_num = (int**)malloc(sizeof(int*) * items->lignes);
	while (i < items->lignes)
	{
		j = 0;
		grid_num[i] = (int*)malloc(sizeof(int) * items->colonnes);
		while (j < items->colonnes)
		{
			if (i == 0)
				grid_num[i][j] = 1;
			if (j == 0)
				grid_num[i][j] = 1;
			if (grille[i][j] == items->obstacle)
				grid_num[i][j] = 0;
			if ((i != 0) && (j != 0) && grille[i][j] != items->obstacle)
				grid_num[i][j] = 2;
			j++;
		}
		i++;
	}
	return (grid_num);
}

int		ft_min(int *tab, int taille)
{
	int		min;
	int		i;

	i = 1;
	min = tab[0];
	while (i < taille)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

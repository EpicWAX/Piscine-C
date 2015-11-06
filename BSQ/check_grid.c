/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:34:35 by sgaudin           #+#    #+#             */
/*   Updated: 2015/08/27 15:38:26 by sgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			check_premiere_ligne(char *grille, t_grid_items *grid_items)
{
	int		i;
	char	*nb;
	int		taille_nb;

	i = 0;
	nb = NULL;
	taille_nb = 10;
	while (grille[i] != '\n')
	{
		if (grille[0] < 48 || grille[0] > 57)
			return (0);
		while (grille[i] >= '0' && grille[i] <= '9')
		{
			nb = ft_strcat(nb, &grille[i], taille_nb++);
			i++;
		}
		grid_items->lignes = ft_atoi(nb);
		i++;
	}
	grid_items->vide = grille[i - 3];
	grid_items->obstacle = grille[i - 2];
	grid_items->rempli = grille[i - 1];
	return (1);
}

int			check_2e_partie(char *grille, t_grid_items *items, int i, int x)
{
	while (grille[i])
	{
		if (grille[i] == items->vide || grille[i] == items->rempli
			|| grille[i] == items->obstacle || grille[i] == '\n')
		{
			if (grille[i] == '\n')
			{
				if (x != items->colonnes)
				{
					ft_putstr("map error\n");
					return (0);
				}
				x = -1;
			}
			x++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int			check_grille(char *grille, t_grid_items *items)
{
	int		i;
	int		taille;
	int		x;
	int		line2;

	i = 0;
	if (check_premiere_ligne(grille, items))
		while (grille[i] != '\n')
			i++;
	else
		return (0);
	i++;
	line2 = i;
	taille = i;
	while (grille[taille] != '\n' && grille[taille] != '\0')
		taille++;
	items->colonnes = taille - i;
	x = 0;
	if (check_2e_partie(grille, items, i, x) == 0)
		return (0);
	return (line2);
}

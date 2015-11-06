/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:54:43 by sgaudin           #+#    #+#             */
/*   Updated: 2015/08/27 16:18:33 by sgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_grid(char **grille, t_grid_items *items)
{
	int i;

	i = 0;
	while (i < (items->lignes))
	{
		ft_putstr(grille[i]);
		i++;
		ft_putchar('\n');
	}
}

int		appels(char *grille, t_grid_items *items)
{
	int		i;
	int		**gridnum;
	char	**tab;

	tab = NULL;
	i = 1;
	if ((i = check_grille(grille, items)))
		tab = grid_str_to_tab(grille, items, i);
	else
	{
		ft_putstr("map error\n");
		return (0);
	}
	gridnum = init_grid_num(tab, items);
	tab = g_finale(tab, items, gridnum);
	print_grid(tab, items);
	return (0);
}

int		main(int ac, char **av)
{
	char			*grille;
	int				i;
	t_grid_items	*items;

	items = (t_grid_items*)malloc(sizeof(t_grid_items));
	i = 1;
	grille = NULL;
	if (ac >= 2)
	{
		while (i < ac)
		{
			grille = get_from_file(av[i]);
			appels(grille, items);
			i++;
		}
	}
	else
	{
		grille = get_from_stdin();
		appels(grille, items);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 14:02:18 by sgaudin           #+#    #+#             */
/*   Updated: 2015/08/27 16:03:57 by sgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_grid_items
{
	int			lignes;
	int			colonnes;
	char		vide;
	char		obstacle;
	char		rempli;
}				t_grid_items;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_min(int *tab, int taille);

char			*get_from_file(char *file);
char			*get_from_stdin(void);
char			**grid_str_to_tab(char *str, t_grid_items *grid_items, int i);
char			*ft_strcat(char *dest, char *src, int size);

int				check_premiere_ligne(char *grille, t_grid_items *grid_items);
int				check_grille(char *grille, t_grid_items *items);

char			**g_finale(char **grille, t_grid_items *items, int **grid_num);
int				*bsq(int **grid_num, t_grid_items *items);
int				**init_grid_num(char **grille, t_grid_items *items);
int				*find_bsq(int **grid_num, t_grid_items *items);

void			print_grid(char **grid, t_grid_items *items);
void			print_grid_num(int **grid, t_grid_items *items);

#endif

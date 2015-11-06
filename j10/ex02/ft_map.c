/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 06:01:21 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/01 14:27:17 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *mloc;

	i = -1;
	mloc = (int*)malloc(length * sizeof(int));
	while (++i < length)
		mloc[i] = f(tab[i]);
	return (mloc);
}

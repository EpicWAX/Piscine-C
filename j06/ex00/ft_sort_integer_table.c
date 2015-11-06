/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:27:02 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/15 03:02:31 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int k;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			k = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = k;
			i = 0;
		}
		else
			i++;
	}
}

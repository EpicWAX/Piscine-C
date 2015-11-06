/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 03:00:09 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/29 18:42:23 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int k;

	i = 0;
	while (tab[i])
	{
		k = 0;
		while (tab[i][k])
		{
			ft_putchar(tab[i][k]);
			k++;
		}
		ft_putchar('\n');
		tab++;
	}
}

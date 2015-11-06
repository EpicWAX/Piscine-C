/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 01:03:55 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/03 01:06:13 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		ok;
	int		i;
	char	*s;

	ok = 0;
	while (!ok)
	{
		ok = 1;
		i = 1;
		while (tab[i] != 0)
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				s = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = s;
				ok = 0;
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 15:20:54 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/01 16:12:44 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tab && tab[i])
	{
		if (f(tab[i]) == 1)
			k += 1;
		i++;
	}
	return (k);
}

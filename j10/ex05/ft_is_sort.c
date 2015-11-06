/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 17:03:30 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/04 03:39:55 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	test;
	int	tmp;

	test = 0;
	while (--length > 0)
	{
		tmp = f(tab[length - 1], tab[length]);
		if (tmp)
		{
			if (!test && tmp)
				test = tmp > 0 ? 1 : -1;
			if ((tmp > 0 && test == -1) || (tmp < 0 && test == 1))
				return (0);
		}
	}
	return (1);
}

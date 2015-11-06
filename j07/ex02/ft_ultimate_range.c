/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 12:52:42 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/31 01:00:37 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *ptr_range;

	i = 0;
	if (min < max)
	{
		len = max - min;
		ptr_range = malloc(sizeof(int*) * (len + 1));
		while (len > 0)
		{
			ptr_range[i] = min + i;
			len--;
			i++;
		}
		*range = ptr_range;
	}
	else
	{
		*range = NULL;
		return (0);
	}
	return (i);
}

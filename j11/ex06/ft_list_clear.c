/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 01:36:23 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/05 01:48:23 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;

	if (*begin_list)
	{
		list = *begin_list;
		while (list)
		{
			tmp = list->next;
			free(list);
			list = tmp;
		}
		*begin_list = NULL;
	}
}

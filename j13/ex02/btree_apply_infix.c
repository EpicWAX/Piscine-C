/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 06:52:11 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/07 14:34:49 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_infix(root->left, applyf);
		if (root->item != 0)
			applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}

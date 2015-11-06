/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 07:36:59 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/16 18:21:58 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
		while (i < nb)
		{
			result = result * (i + 1);
			i++;
		}
	return (result);
}

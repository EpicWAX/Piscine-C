/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 12:59:19 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/15 07:18:46 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
		;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int i;
	int k;

	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		ft_swap(str + i, str + k);
		i++;
		k--;
	}
	return (str);
}

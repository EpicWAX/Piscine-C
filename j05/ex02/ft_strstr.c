/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 00:33:19 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/19 05:46:54 by qhusler          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int tf_size;

	i = 0;
	k = 0;
	tf_size = ft_strlen(to_find);
	if (tf_size == 0)
		return (str);
	while (str && str[i])
	{
		while (str[i + k] == to_find[k])
		{
			if (k == tf_size - 1)
				return (str + i);
			k++;
		}
		k = 0;
		i++;
	}
	return ((void*)0);
}

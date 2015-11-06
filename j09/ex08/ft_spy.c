/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 01:42:33 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/23 03:44:01 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*lowc(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}

int		cmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j] == ' ')
		j++;
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[i])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int		main(int ac, char **av)
{
	int alert;
	int i;

	alert = 0;
	i = 0;
	while (++i < ac)
	{
		lowc(av[i]);
		if (cmp("president", av[i]) == 0)
			alert = 1;
		if (cmp("attack", av[i]) == 0)
			alert = 1;
		if (cmp("powers", av[i]) == 0)
			alert = 1;
	}
	if (alert == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}

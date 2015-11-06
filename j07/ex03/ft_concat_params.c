/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 12:58:31 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/29 20:12:08 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(dest);
	while (i < nb && src && src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int		ft_argvlen(int argc, char **argv)
{
	int				i;
	unsigned int	s;

	i = 1;
	s = 0;
	while (i < argc)
	{
		s = s + ft_strlen(argv[i]);
		i++;
	}
	return (s);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*dest;
	char	*bn;

	i = 1;
	bn = "\n";
	dest = (char*)malloc(sizeof(char) * ft_argvlen(argc, argv));
	if (argc > 1)
		while (++i < argc + 1)
		{
			ft_strncat(dest, argv[i - 1], ft_strlen(argv[i - 1]));
			if (i < argc)
				ft_strncat(dest, bn, 1);
		}
	return (dest);
}

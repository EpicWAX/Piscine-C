/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 08:45:42 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/25 20:35:29 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int	ft_strnlen(char *str, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size && str && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int s_dest;
	unsigned int s_src;
	unsigned int n_size;

	s_dest = ft_strnlen(dest, size);
	s_src = ft_strlen(src);
	n_size = size - s_dest;
	dest += s_dest;
	if (n_size > 0)
	{
		ft_strncpy(dest, src, n_size);
		dest[n_size - 1] = '\0';
	}
	return (s_dest + s_src);
}

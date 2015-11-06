/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 19:10:55 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/22 16:36:31 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
		ft_putchar(str[i]);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (--i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

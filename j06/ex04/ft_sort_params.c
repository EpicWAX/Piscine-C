/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 19:27:35 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/24 19:22:05 by qhusler          ###   ########.fr       */
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

void	ft_swap_str(char **s1, char **s2)
{
	char *c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int it;

	it = 1;
	while (it < argc - 1)
	{
		if (ft_strcmp(argv[it], argv[it + 1]) > 0)
		{
			ft_swap_str(&argv[it], &argv[it + 1]);
			it = 1;
		}
		else
			it++;
	}
	it = 1;
	while (it < argc)
	{
		ft_putstr(argv[it]);
		ft_putchar('\n');
		it++;
	}
	return (0);
}

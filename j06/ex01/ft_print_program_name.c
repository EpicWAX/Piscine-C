/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 18:08:10 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/24 12:25:24 by qhusler          ###   ########.fr       */
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
	if (argc >= 1)
		ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}

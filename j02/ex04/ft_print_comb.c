/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 13:28:39 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/15 02:31:19 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_char(char i, char k, char s)
{
	ft_putchar(i);
	ft_putchar(k);
	ft_putchar(s);
}

void	ft_print_comb(void)
{
	char	tab[3];

	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				ft_char(tab[0], tab[1], tab[2]);
				if (tab[0] != '7' || tab[1] != '8' || tab[2] != '9')
					ft_space();
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}

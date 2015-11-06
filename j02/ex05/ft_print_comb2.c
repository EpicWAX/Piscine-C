/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 19:47:15 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/14 19:49:54 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		if (b != 100)
			b++;
		if (b == 100)
		{
			a += 1;
			b = a + 1;
		}
		if (a <= 98)
		{
			ft_print(a, b);
			if (a != 98)
				ft_space();
		}
	}
}

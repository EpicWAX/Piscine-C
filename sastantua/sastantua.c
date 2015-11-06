/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 18:47:02 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/19 00:01:36 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	wr_stars(int star_countr)
{
	int i2;

	i2 = -1;
	ft_putchar('/');
	while (++i2 != star_countr)
		ft_putchar('*');
	ft_putchar('\\');
	ft_putchar('\n');
}

int		space_contr(int ie, int star_ctr)
{
	int i2;

	i2 = -1;
	while (++i2 != star_ctr)
		ie += 1;
	return (ie);
}

int		stars_cntr(int size)
{
	int lvl;
	int i;
	int size_cnt;
	int base;
	int star_ctr;
	int	ie;
	int	remp;
	int i2;

	lvl = 0;
	i = 1;
	size_cnt = -1;
	star_ctr = 1;
	ie = 0;
	remp = 0;
	i2 = -1;
	while (++size_cnt != size)
	{
		base = i;
		while (lvl != base + 2)
		{
			i2 = -1;
			ie = 0;
			remp = 0;
			while (++i2 != star_ctr)
				ie += 1;
			ft_putchar('\n');
			lvl++;
			if (lvl != base + 2)
			{
				star_ctr += 2;
			}
		}
		i++;
		base = 0;
		lvl = 0;
		star_ctr += 6;
		remp = ie;
	}
	ft_putchar('\n');
	return (remp);
}

void	sastantua(int size)
{
	int	lvl;
	int i;
	int	size_cnt;
	int	base;
	int	star_countr;

	lvl = 0;
	i = 1;
	size_cnt = -1;
	star_countr = 1;
	while (++size_cnt != size)
	{
		base = i;
		while (lvl != base + 2)
		{
			wr_stars(star_countr);
			lvl++;
			if (lvl != base + 2)
				star_countr += 2;
		}
		i++;
		base = 0;
		lvl = 0;
		star_countr += 6;
	}
}

int		main()
{
	sastantua(5);
	return (0);
}

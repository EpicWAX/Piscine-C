/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:38:54 by qhusler           #+#    #+#             */
/*   Updated: 2015/11/03 05:34:52 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef struct	s_tpf
{
	char		op;
	void		(*f)(int, int);
}				t_tpf;

void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			add(int a, int b);
void			sub(int a, int b);
void			mlt(int a, int b);
void			divi(int a, int b);
void			mod(int a, int b);

#endif

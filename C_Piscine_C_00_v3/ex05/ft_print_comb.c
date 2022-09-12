/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:55:36 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/16 14:47:34 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_line(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	return ;
}

void	print_line(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
	return ;
}

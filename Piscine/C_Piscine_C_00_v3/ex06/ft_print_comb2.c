/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:16:21 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/16 14:48:14 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n);

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	space;
	char	comma;

	space = ' ';
	comma = ',';
	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print_number(a);
			write(1, &space, 1);
			print_number(b);
			if (!(a == 98 && b == 99))
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
			b++;
		}
		a++;
	}
}

void	print_number(int n)
{
	char	digit0;
	char	digit1;

	digit0 = (n % 10) + '0';
	digit1 = ((n / 10) % 10) + '0';
	write(1, &digit1, 1);
	write(1, &digit0, 1);
}

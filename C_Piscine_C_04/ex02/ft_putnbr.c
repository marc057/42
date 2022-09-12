/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:51:15 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/16 14:48:56 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int nb);

void	ft_putnbr(int nb)
{
	char	minus_simbol;

	minus_simbol = '-';
	if (nb < 0)
	{	
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, &minus_simbol, 1);
		nb *= -1;
	}
	print_digits(nb);
	return ;
}

void	print_digits(int nb)
{
	char	digit;

	if (nb < 10)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
	else
	{
		print_digits(nb / 10);
		digit = (nb % 10) + '0';
		write(1, &digit, 1);
	}
}

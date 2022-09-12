/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:57:29 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 14:57:30 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb <= 2147483629)
	{
		if (ft_is_prime(nb) == 0)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (1);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -128371283;
// 	printf("The next prime number after %d is %d\n",
// 		n, ft_find_next_prime(n));
// 	return (0);
// }

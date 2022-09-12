/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:30 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 14:37:31 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// 	n = 2147483646;
// 	while (n < 2147483647)
// 	{
// 		printf("%d is ", n);
// 		ft_is_prime(n) == 1 ? printf("not ") : printf("");
// 		printf("a prime number\n");
// 		n++;
// 	}
// }

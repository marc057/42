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
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -1;
// 	while (n < 30)
// 	{
// 		printf("%d is ", n);
// 		ft_is_prime(n) == 0 ? printf("not ") : printf("");
// 		printf("a prime number\n");
// 		n++;
// 	}
// }

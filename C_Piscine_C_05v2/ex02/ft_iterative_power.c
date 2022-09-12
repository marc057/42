/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:57:03 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 16:57:04 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < power)
	{
		nb *= n;
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n, p;
// 	n = -5;
// 	p = 1;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = -5;
// 	p = 2;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = -5;
// 	p = 3;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = 0;
// 	p = 5;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = 0;
// 	p = 0;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = 2;
// 	p = 6;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	n = 2;
// 	p = -4;
// 	printf("%d to the power of %d is %d\n", n, p, ft_iterative_power(n, p));
// 	return (0);
// }
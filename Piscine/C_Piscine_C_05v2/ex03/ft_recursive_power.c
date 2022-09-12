/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:18:09 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 17:18:11 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n, p;
// 	n = -5;
// 	p = 1;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = -5;
// 	p = 2;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = -5;
// 	p = 3;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = 0;
// 	p = 5;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = 0;
// 	p = 0;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = 2;
// 	p = 6;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	n = 2;
// 	p = -4;
// 	printf("%d to the power of %d is %d\n", n, p, ft_recursive_power(n, p));
// 	return (0);
// }

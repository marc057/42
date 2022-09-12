/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:43:40 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/29 15:43:42 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -5;
// 	printf("Fibonacci of %d is %d\n", n, ft_fibonacci(n));
// 	n = 0;
// 	while (n < 8)
// 	{
// 		printf("Fibonacci of %d is %d\n", n, ft_fibonacci(n));
// 		n++;
// 	}
// 	return (0);
// }

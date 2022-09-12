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

int	fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (fibonacci(index - 1) + fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -5;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 0;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 1;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 2;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 3;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 4;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	n = 5;
// 	printf("Fibonacci of %d is %d\n", n, fibonacci(n));
// 	return (0);
// }

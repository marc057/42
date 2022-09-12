/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:49:09 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 16:49:10 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;	
// 	n = -1;
// 	while (n < 8)
// 	{
// 		printf("The factorial of %d is %d\n", n, ft_recursive_factorial(n));
// 		n++;
// 	}
// }

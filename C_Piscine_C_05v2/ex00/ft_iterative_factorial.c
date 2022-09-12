/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:42:29 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 15:42:31 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < n)
	{
		nb *= i;
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n;	
// 	n = -1;
// 	while (n < 8)
// 	{
// 		printf("The factorial of %d is %d\n", n, ft_iterative_factorial(n));
// 		n++;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:22:04 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 14:22:06 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 0)
		return (0);
	root = 0;
	while (root < 46341)
	{
		if (nb == root * root)
			return (root);
		root++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	n = -5;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 0;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 1;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 5;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 25;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 625;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 2147395600;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	n = 2147483647;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	return (0);
// }

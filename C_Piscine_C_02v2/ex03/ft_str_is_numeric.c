/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:02:19 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 16:02:21 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "172381263127830900000999111";
// 	char *str2 = "87821 12871283127";
// 	char *str3 = "872173821sajdhsah271838";
// 	char *str4 = "12836127&86127//1723812";
// 	ft_str_is_numeric(str1) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_numeric(str2) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_numeric(str3) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_numeric(str4) == 1 ? printf("Y\n") : printf("N\n");
// 	return (0);
// }

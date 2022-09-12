/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:12:43 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 16:12:45 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "SAHDSAJDASDNJSAD";
// 	char *str2 = "ASDSAJDSA JASNDAJS ";
// 	char *str3 = "SAJNDSA18181BSJJSAJDASJ";
// 	char *str4 = "JASNDSJjASSDKSADSAJJJJJjjjjjj";
// 	ft_str_is_uppercase(str1) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_uppercase(str2) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_uppercase(str3) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_uppercase(str4) == 1 ? printf("Y\n") : printf("N\n");
// 	return (0);
// }
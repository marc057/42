/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:09:13 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 16:09:15 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "djsadnsjadnjsadas";
// 	char *str2 = "ansdjsadjnsa ajsndjsadnajs";
// 	char *str3 = "kasdksKAMSMSAKmksmdkamd";
// 	char *str4 = "1sdamkdsmk81ui9812nu89";
// 	ft_str_is_lowercase(str1) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_lowercase(str2) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_lowercase(str3) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_lowercase(str4) == 1 ? printf("Y\n") : printf("N\n");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:13:46 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 15:13:48 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] <= 96 && str[i] >= 91))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "kasnASDJDNjansjisandasjasJAdasjnjNAsjnan";
// 	char *str2 = "asdnJASNJn4jansdjas";
// 	char *str3 = "MASSKDDdsam&&&sabdbas";
// 	char *str4 = "asjdjsaHash a ssaada ";
// 	ft_str_is_alpha(str1) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_alpha(str2) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_alpha(str3) == 1 ? printf("Y\n") : printf("N\n");
// 	ft_str_is_alpha(str4) == 1 ? printf("Y\n") : printf("N\n");
// 	return (0);
// }

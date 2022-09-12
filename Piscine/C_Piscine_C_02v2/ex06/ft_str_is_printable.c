/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:17:18 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 16:17:20 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char *str1 = "SAHDSAJDASDNJSAD";
	char *str2 = "ASDSAJDSA JASNDAJS " + 3;
	char *str3 = "";
	ft_str_is_printable(str1) == 1 ? printf("Y\n") : printf("N\n");
	ft_str_is_printable(str2) == 1 ? printf("Y\n") : printf("N\n");
	ft_str_is_printable(str3) == 1 ? printf("Y\n") : printf("N\n");
	return (0);
}
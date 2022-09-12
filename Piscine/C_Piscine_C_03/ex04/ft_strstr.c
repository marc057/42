/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:34:05 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 10:34:07 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] != 0 && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "Hola, que tal";
// 	char *str2 = "ue";
// 	char *str3 = ft_strstr(str1, str2);
// 	printf("%s", str3);
// 	return (0);
// }

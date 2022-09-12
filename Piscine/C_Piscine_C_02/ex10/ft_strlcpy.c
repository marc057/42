/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:08:35 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 20:08:36 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				srclen;

	srclen = ft_strlen(src);
	if (ft_strlen(dest) > srclen)
	{
		i = 0;
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
		if (i > 0)
			dest[i] = 0;
	}
	return (srclen);
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

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "Hola, que tal?";
// 	char *str2 = "ABCDEFGHIJ";
// 	char *str3 = "Hola, que tal?";
// 	char *str4 = "KLMNOPQRST";

// 	ft_strlcpy(str1, str2, 10);
// 	strlcpy(str3, str4, 10);
// 	printf("%s\n", str1);
// 	printf("%s\n", str3);
// 	return (0);
// }

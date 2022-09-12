/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:39:33 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/31 16:39:35 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;

	src_length = ft_strlen(src);
	dest = (char *) malloc(src_length + 1 * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s1 = "hola que tal\n";
// 	char *s2 = ft_strdup(s1);
// 	printf("The string is: %s", s2);
// 	printf("And its length is %d\n", ft_strlen(s2));
// 	return (0);
// }

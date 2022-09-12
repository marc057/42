/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:25:07 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/24 12:25:08 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlength;

	dlength = ft_strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[dlength + i] = src[i];
		i++;
	}
	dest[dlength + i] = 0;
	return (dest);
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

#include <stdio.h>
int	main(void) {
	char s0[100] = "";
	char s1[100] = "Hola";
	char *s2 = ", que tal";
	ft_strcat(s0, s1);
	ft_strcat(s1, s2);
	printf("%s", s1);
	return (0);
}

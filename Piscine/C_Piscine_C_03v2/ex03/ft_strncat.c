/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:57:21 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/25 09:57:22 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dlength;

	dlength = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != 0)
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
	ft_strncat(s0, s1, 10);
	ft_strncat(s1, s2, 7);
	printf("%s", s1);
	return (0);
}

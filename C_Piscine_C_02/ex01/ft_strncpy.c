/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:31:17 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/21 20:31:20 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char *str2 = "aaaaaaaaaa", *str1 = "Hello world";
	unsigned int n = 5;
	ft_strncpy(str2, str1, n);
	printf("%s!", str2);
	return (0);
}

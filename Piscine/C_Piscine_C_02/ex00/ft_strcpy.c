/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:17:10 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/21 20:17:14 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str2, *str1 = "Hello world";
// 	ft_strcpy(str2, str1);
// 	printf("%s!", str2);
// 	return (0);
// }

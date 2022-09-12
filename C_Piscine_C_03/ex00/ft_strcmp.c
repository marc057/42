/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:38:49 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/24 09:38:50 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int	main(void) {
// 	char *s1 = "Hola";
// 	char *s2 = "Adios";
// 	char *s3 = "Holaaaaa";
// 	char *s4 = "Hola";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", ft_strcmp(s1, s3));
// 	printf("%d\n", ft_strcmp(s1, s4));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:02:59 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/24 10:03:01 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void) {
// 	char *s1 = "Hola";
// 	char *s2 = "Adios";
// 	char *s3 = "Holaaaaa";
// 	char *s4 = "Hola";
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s3, 4));
// 	printf("%d\n", ft_strncmp(s1, s4, 7));
// 	return (0);
// }

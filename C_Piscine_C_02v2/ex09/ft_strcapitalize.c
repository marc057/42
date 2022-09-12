/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:12:04 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/22 19:12:05 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumerical(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				if (is_alphanumerical(str[i - 1]) == 0)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

int	is_alphanumerical(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? ";
// 	char str2[] = "42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(str);
// 	ft_strcapitalize(str2);
// 	printf("%s", str);
// 	printf("%s\n", str2);
// 	return (0);
// }

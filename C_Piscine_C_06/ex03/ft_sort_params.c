/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:10:48 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/31 13:10:49 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TAB_SIZE 100

void	ft_sort_tab(char tab[TAB_SIZE][TAB_SIZE], int size);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int		i;
	char	argv_without_name[TAB_SIZE][TAB_SIZE];
	int		j;

	if (argc > 1)
	{
		j = 0;
		while (argv[j + 1] != 0)
		{
			ft_strcpy(argv_without_name[j], argv[j + 1]);
			j++;
		}
		ft_sort_tab(argv_without_name, argc - 1);
		i = 0;
		while (i < argc - 1)
		{
			ft_putstr(argv_without_name[i]);
			ft_putstr("\n");
			i++;
		}
	}	
	return (0);
}

void	ft_sort_tab(char tab[TAB_SIZE][TAB_SIZE], int size)
{
	int		i;
	int		j;
	char	aux[TAB_SIZE];

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{	
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_strcpy(aux, tab[j]);
				ft_strcpy(tab[j], tab[j + 1]);
				ft_strcpy(tab[j + 1], aux);
			}
			j++;
		}
		i++;
	}
}
// I used a bubble sort algorithm to sort the array
// It has a complexity time O(n^2), but it has the advantage
// of being very simple and easy to understand

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

void	ft_putstr(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
}

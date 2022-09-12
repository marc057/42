/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:31:56 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/18 15:32:02 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{	
			if (*(tab + j) > *(tab + j + 1))
			{
				aux = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = aux;
			}
			j++;
		}
		i++;
	}
}
// I used a bubble sort algorithm to sort the array
// It has a complexity time O(n^2), but it has the advantage
// of being very simple and easy to understand

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:31:45 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/16 13:31:48 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = *(tab + i);
		*(tab + i) = *(tab + j);
		*(tab + j) = aux;
		j--;
		i++;
	}
}
// we swap the first element with the last, 
// then the second to the second last, etc...

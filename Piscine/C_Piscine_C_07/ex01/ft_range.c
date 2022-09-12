/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:15:35 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/31 18:15:36 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		size;
	int		i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *) malloc(size * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}

#include <stdio.h>
int	main(void)
{
	int min = 0;
	int max = 7;
	int *range = ft_range(min, max);
	for (int i = 0; i < 8; i++)
		printf("%d\n", range[i]);
	return (0);
}
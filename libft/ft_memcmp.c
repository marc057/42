/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:21 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 12:02:37 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	if (n != 0)
	{
		ptr1 = (const unsigned char *) s1;
		ptr2 = (const unsigned char *) s2;

		i = 0;
		while (i < n)
		{
			if (*ptr1 != *ptr2)
				return (*ptr1 - *ptr2);
			ptr1++;
			ptr2++;
			i++;
		}
	}
	return (0);
}

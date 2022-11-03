/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:17 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 11:20:13 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pos;
	size_t		i;

	pos = (const char *) s;
	i = 0;
	while (i < n)
	{
		if (pos[i] == c)
			return ((void *) &pos[i]);
		pos++;
		i++;
	}
	return (0);
}

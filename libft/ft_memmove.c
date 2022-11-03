/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:27 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 12:03:27 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*aux_src;
	char	*aux_dest;
	char	*aux_tmp;
	size_t	i;

	aux_tmp = 0;
	aux_src = (char *)src;
	aux_dest = (char *)dest;
	if (aux_src == aux_dest || n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		aux_tmp[i] = aux_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		aux_dest[i] = aux_tmp[i];
		i++;
	}
	return (dest);
}

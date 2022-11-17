/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:34:58 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/14 13:54:03 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dest;
	char			found;

	if (dest == NULL && src == NULL)
		return (NULL);

	aux_src = (unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	found = 0;
	while (n > 0 && !found)
	{
		if (*aux_src == (unsigned char) c)
			found = 1;
		*aux_dest = *aux_src;
		aux_dest++;
		aux_src++;
		n--;
	}
	if (!found)
		return (NULL);
	return (aux_dest);
}

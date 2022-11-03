/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:14:30 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 11:21:20 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*aux_src;
	char			*aux_dest;

	aux_src = (char *)src;
	aux_dest = (char *)dest;
	while (n > 0)
	{
		*aux_dest = *aux_src;
		aux_dest++;
		aux_src++;
		n--;
	}
	return (dest);
}

// TODO: checkout restrict keyword
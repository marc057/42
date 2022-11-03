/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:39:32 by marcos            #+#    #+#             */
/*   Updated: 2022/11/03 11:15:59 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = s;
	while (n > 0)
	{
		*aux = (unsigned char) c;
		aux++;
		n--;
	}
	return (s);
}

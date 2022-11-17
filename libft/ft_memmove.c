/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:27 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/14 16:23:06 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function only exitsts because 42 norminette STUPID rule of
// not having functions exceding 25 lines. uint8_t its just another name for 
// unsigned char, once again because of the rule of lines not being too long
void	ft_memmove_overlap(uint8_t *d, uint8_t *s, size_t n, char m);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dest;

	aux_src = (unsigned char *) src;
	aux_dest = (unsigned char *) dest;
	if (aux_dest == aux_src || n == 0)
	{
		return (dest);
	}
	if (aux_dest > aux_src && aux_dest - aux_src < (int) n)
	{
		ft_memmove_overlap(aux_dest, aux_src, n, 0);
		return (dest);
	}
	if (aux_src > aux_dest && aux_src - aux_dest < (int) n)
	{
		ft_memmove_overlap(aux_dest, aux_src, n, 1);
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

void	ft_memmove_overlap(uint8_t *d, uint8_t *s, size_t n, char m)
{
	int	i;

	if (m == 0)
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	if (m == 1)
	{
		i = 0;
		while (i < (int) n)
		{
			d[i] = s[i];
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:42 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/23 14:44:58 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src,
					unsigned int size)
{
	char			*aux_dest;
	const char		*aux_src;
	unsigned int	destlen;

	aux_dest = dest;
	aux_src = src;
	while (size != 0 && *aux_dest != 0)
	{
		aux_dest++;
		size--;
	}
	destlen = aux_dest;
	// TODO: Complete code
}

// TODO: Checkout register
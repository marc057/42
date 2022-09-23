/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:14:30 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/23 14:14:49 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src,
			unsigned int n)
{
	char			*aux_src;
	char			*aux_dest;
	unsigned int	i;

	aux_src = (char *)src;
	aux_dest = (char *)dest;
	while (n > 0)
	{
		*aux_dest = *aux_src;
		aux_dest++;
		aux_src++;
		n--;
	}
}

// TODO: checkout restrict keyword
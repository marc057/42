/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:27 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/23 14:44:58 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	char			*aux_src;
	char			*aux_dest;
	char			*aux_tmp;
	unsigned int	i;
	
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

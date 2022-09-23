/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:39:32 by marcos            #+#    #+#             */
/*   Updated: 2022/09/22 13:22:34 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
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

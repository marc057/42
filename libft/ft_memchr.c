/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:17 by mcolomba          #+#    #+#             */
/*   Updated: 2022/10/24 12:50:28 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const char		*pos;
	unsigned int	i;

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

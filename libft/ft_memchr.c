/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:17 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/30 11:51:31 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	void			*pos;
	unsigned int	i;

	pos = s;
	i = 0;
	while (pos[i])
	{
		if (*pos == (char) c)
			return (pos);
		pos++;
	}
	return (pos);
}

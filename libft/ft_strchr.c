/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:35 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/30 11:49:07 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*pos;

	pos = str;
	while (*pos)
	{
		if (*pos == (char) c)
			return (pos);
		pos++;
	}
	return (pos);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:35 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 11:57:18 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*pos;

	pos = NULL;
	ft_strlcpy(pos, str, ft_strlen(str));
	while (*pos)
	{
		if (*pos == (char) c)
			return (pos);
		pos++;
	}
	return (pos);
}

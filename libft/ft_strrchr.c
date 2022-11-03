/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:58 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 11:56:45 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pos;
	size_t	str_len;

	pos = NULL;
	if (c == '\0')
		return (ft_strchr(str, 0));
	str_len = ft_strlen(str);
	ft_strlcpy(pos, str, ft_strlen(str));
	while (str_len)
	{
		if (*pos == (char) c)
			return (pos);
		pos--;
		str_len--;
	}
	return (0);
}

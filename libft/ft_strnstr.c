/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:53 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/14 13:21:02 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	size_t			little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *) big);
	i = 0;
	j = 0;
	while (big[i] && (size_t)i < n)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == little_len)
			return ((char *)big + i - j + 1);
		i++;
	}
	return (NULL);
}

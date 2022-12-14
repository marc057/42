/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:38 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/03 13:54:59 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	char	*aux_str;
	size_t	len;
	int		i;

	aux_str = (char *) str;
	len = ft_strlen(str);
	cpy = (char *) malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (aux_str[i] != 0)
	{
		cpy[i] = aux_str[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

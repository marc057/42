/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:58 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/30 11:42:08 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char			*pos;
	unsigned int	str_len;

	if (c == '\0')
		return (ft_strchr(str, 0));
	str_len = ft_strlen(str);
	pos = str + str_len - 1;
	while (str_len)
	{
		if (*pos == (char) c)
			return (pos);
		pos--;
		str_len--;
	}
	return (0);
}

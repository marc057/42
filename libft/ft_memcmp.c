/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:19:21 by mcolomba          #+#    #+#             */
/*   Updated: 2022/10/24 12:50:08 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	unsigned int		i;

	if (n != 0)
	{
		ptr1 = (const unsigned char *) s1;
		ptr2 = (const unsigned char *) s2;

		i = 0;
		while (i < n)
		{
			i++;
			// TODO: Finish
		}
	}
	return (0);
}

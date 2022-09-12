/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:27:04 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 11:27:06 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

#define BUFF_SIZE 10000

int	ft_readfile(char *file_name)
{
	int		file_descriptor;
	int		ret;
	char	buffer[BUFF_SIZE + 1];

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
	{
		ft_putstr("open() error");
		return (-1);
	}
	ret = read(file_descriptor, buffer, BUFF_SIZE);
	buffer[ret] = 0;
	ft_putnbr(ret);
	ft_putstr("\n");
	ft_putstr(buffer);
	if (close(file_descriptor) == -1)
	{
		ft_putstr("close() error");
		return (-1);
	}
	return (0);
}

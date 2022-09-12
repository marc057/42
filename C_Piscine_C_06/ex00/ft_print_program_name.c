/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:27:46 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/31 12:27:49 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	return (0);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

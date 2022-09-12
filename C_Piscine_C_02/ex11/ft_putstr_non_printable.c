/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:06:45 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/23 17:06:46 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex_position(char c);
char	int_to_hex(int n);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < ' ' || str[i] > '~')
			print_hex_position(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	print_hex_position(char c)
{
	int		digit0;
	int		digit1;
	char	digit_to_print;

	write(1, "\\", 1);
	digit1 = c / 16;
	digit_to_print = int_to_hex(digit1);
	write(1, &digit_to_print, 1);
	digit0 = c % 16;
	digit_to_print = int_to_hex(digit0);
	write(1, &digit_to_print, 1);
}

char	int_to_hex(int n)
{
	if (n >= 0 && n < 16)
	{
		if (n < 10)
			return (n + '0');
		else
			return (n + 87);
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return(0);
// }

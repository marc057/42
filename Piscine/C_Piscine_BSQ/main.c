/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:16:02 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 12:16:06 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (-1);
	ft_readfile(argv[1]);
	return (0);
}

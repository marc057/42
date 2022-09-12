/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftutils.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:49:41 by mcolomba          #+#    #+#             */
/*   Updated: 2022/08/30 11:49:42 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <fcntl.h>

int		ft_readfile(char *file_name);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:04:07 by mcolomba          #+#    #+#             */
/*   Updated: 2022/11/04 13:52:19 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *s1 = "Hola que tal";
	char *s2 = "que";
 
	s1 = ft_strnstr(s1, s2, ft_strlen(s1));
	printf(s1);
    return (0);
}

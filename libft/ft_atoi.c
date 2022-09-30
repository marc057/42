/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolomba <mcolomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:00:07 by mcolomba          #+#    #+#             */
/*   Updated: 2022/09/27 14:23:24 by mcolomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]) == 1)
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

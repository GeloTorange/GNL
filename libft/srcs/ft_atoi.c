/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:52:29 by torange           #+#    #+#             */
/*   Updated: 2019/09/17 17:46:21 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||  \
	str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && str[i] >= '0' && '9' >= str[i])
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}

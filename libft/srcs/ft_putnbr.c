/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:26:57 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 21:35:15 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	unsigned	c;

	if (nbr < 0)
		ft_putchar('-');
	c = (unsigned)FT_ABS(nbr);
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c + '0');
}

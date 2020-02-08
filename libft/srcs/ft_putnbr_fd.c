/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:34:40 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 21:37:21 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned	c;

	if (nbr < 0)
		ft_putchar_fd('-', fd);
	c = (unsigned)FT_ABS(nbr);
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else
		ft_putchar_fd(c + '0', fd);
}

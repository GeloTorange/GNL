/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:49:11 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 18:09:59 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t l)
{
	unsigned char *s;

	s = dest;
	if (dest < str)
		while (l--)
			*s++ = *((unsigned char *)str++);
	else
	{
		s += l;
		str += l;
		while (l--)
			*--s = *((unsigned char *)--str);
	}
	return (dest);
}

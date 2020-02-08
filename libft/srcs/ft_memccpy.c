/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:30:42 by torange           #+#    #+#             */
/*   Updated: 2019/09/06 16:29:04 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *str, int c, size_t l)
{
	while (l--)
	{
		*((unsigned char *)dest++) = *((unsigned char *)str++);
		if (*((unsigned char *)dest - 1) == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}

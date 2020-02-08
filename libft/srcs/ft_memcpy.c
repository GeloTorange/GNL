/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:27:16 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 18:08:06 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	unsigned char *s1;

	s1 = dest;
	while (n--)
		*s1++ = *((unsigned char *)str++);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:00:32 by torange           #+#    #+#             */
/*   Updated: 2019/09/05 18:10:05 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int c, size_t l)
{
	while (l--)
	{
		if (*((unsigned char *)dest) == (unsigned char)c)
			return ((unsigned char *)dest);
		dest++;
	}
	return (NULL);
}

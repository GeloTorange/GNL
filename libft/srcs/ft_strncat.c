/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:43:39 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 19:08:23 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;

	i = ft_strlen(dest);
	while (nb-- && (dest[i] = *src++))
		i++;
	dest[i] = '\0';
	return (dest);
}

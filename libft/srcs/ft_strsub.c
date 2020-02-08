/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:03:32 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 20:58:58 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || start + len > ft_strlen(s))
		return (NULL);
	if ((str = ft_strnew(len)))
	{
		while (len--)
			str[i++] = s[start++];
		str[i] = '\0';
	}
	return (str);
}

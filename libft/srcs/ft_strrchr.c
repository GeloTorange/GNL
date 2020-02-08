/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:01:47 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 20:01:17 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	char *s;

	s = (char *)str + ft_strlen(str);
	while (s >= str)
	{
		if (*s == n)
			return (s);
		s--;
	}
	return (NULL);
}

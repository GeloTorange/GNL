/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:12:58 by torange           #+#    #+#             */
/*   Updated: 2019/09/08 13:36:47 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	s1 = (char *)s1;
	if (!ft_strlen(s2))
		return ((char *)s1);
	if (ft_strlen(s1) < ft_strlen(s2) || len < ft_strlen(s2))
		return (NULL);
	i = 0;
	while (s1[i] && i <= (int)(len - ft_strlen(s2)))
	{
		j = 0;
		while (s2[j] && s2[j] == s1[i + j])
			j++;
		if (j == (int)ft_strlen(s2))
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

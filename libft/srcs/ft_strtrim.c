/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:12:43 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 20:41:53 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*result;
	size_t		i;
	size_t		start;
	size_t		finish;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	finish = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	while (finish && (s[finish - 1] == ' '
	|| s[finish - 1] == '\t' || s[finish - 1] == '\n'))
		finish--;
	if ((result = ft_strnew((finish > start) ? (finish - start) : 0)))
	{
		while (start < finish)
			result[i++] = s[start++];
		result[i] = '\0';
	}
	return (result);
}

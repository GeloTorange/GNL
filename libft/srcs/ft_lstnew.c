/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:24:31 by torange           #+#    #+#             */
/*   Updated: 2019/09/19 13:54:43 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *s;

	if ((s = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
		{
			s->content = NULL;
			s->content_size = 0;
		}
		else
		{
			if (!(s->content = ft_memalloc(content_size)))
			{
				free(s);
				return (NULL);
			}
			ft_memcpy(s->content, content, content_size);
			s->content_size = content_size;
		}
		s->next = NULL;
	}
	return (s);
}

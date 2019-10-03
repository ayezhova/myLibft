/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:57:43 by ayezhova          #+#    #+#             */
/*   Updated: 2019/09/25 21:58:43 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list)
{
	t_list *link;

	link = *list;
	if (!list)
	{
		free(link->content);
		link->content_size = 0;
	}
	while ((link = link->next))
	{
		free(link->content);
		link->content_size = 0;
	}
	link = (NULL);
}

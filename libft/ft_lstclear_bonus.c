/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 16:25:35 by mymik             #+#    #+#             */
/*   Updated: 2019/11/07 19:50:57 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *prev;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		prev = list;
		list = list->next;
		del(prev->content);
		free(prev);
	}
	*lst = NULL;
}

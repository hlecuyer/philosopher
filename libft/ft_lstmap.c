/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:27:02 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/04/21 16:35:37 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstmap;
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lstmap = malloc(sizeof(t_list));
		if (lstmap == NULL)
			return (NULL);
		tmp = ft_lstnew(lst->content, lst->content_size);
		if (tmp == NULL)
			return (NULL);
		lstmap->next = f(tmp);
		tmp = NULL;
		lstmap = lstmap->next;
		lst = lst->next;
	}
	tmp = malloc(sizeof(t_list));
	tmp = f(lst);
	lstmap = tmp;
	return (lst);
}

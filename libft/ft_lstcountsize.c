/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcountsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 15:24:23 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 17:35:39 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstcountsize(t_list **alst)
{
	size_t	size;

	while (*alst)
	{
		size = size + (*alst)->content_size;
		*alst = (*alst)->next;
	}
	return (size);
}

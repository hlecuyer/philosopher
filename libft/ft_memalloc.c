/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 08:59:38 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 17:38:55 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*new;
	int				i;

	i = 0;
	new = (unsigned char *)malloc(sizeof(unsigned char) * (size));
	if (new == NULL)
		return (NULL);
	while (size > 0)
	{
		new[i] = 0;
		i++;
		size--;
	}
	return ((void *)new);
}

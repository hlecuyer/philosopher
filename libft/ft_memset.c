/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:52:16 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 17:47:12 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = dest;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (dest);
}

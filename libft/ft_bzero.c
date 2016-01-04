/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:25:27 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 17:31:46 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *dest, size_t n)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = dest;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
}

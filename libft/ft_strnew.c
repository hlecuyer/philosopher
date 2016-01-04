/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:25:58 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/04/21 16:16:20 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*strnew;
	unsigned int	i;

	i = 0;
	strnew = (char *)malloc(sizeof(char) * size);
	if (strnew == NULL)
		return (NULL);
	else
	{
		while (i <= size)
		{
			strnew[i] = 0;
			i++;
		}
	}
	return (strnew);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:01:01 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 18:01:00 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		map = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
		if (map == NULL)
			return (NULL);
		while (s[i] != 0)
		{
			map[i] = f(i, s[i]);
			i++;
		}
		return (map);
	}
	return (NULL);
}

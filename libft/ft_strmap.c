/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 11:51:59 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 18:00:15 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	i = 0;
	if (s && f)
	{
		map = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
		if (map == NULL)
			return (NULL);
		while (s[i] != 0)
		{
			map[i] = f(s[i]);
			i++;
		}
		return (map);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:24:18 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 17:59:05 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	if (!s2)
		return (ft_strdup(s1));
	if (s1)
	{
		i = (int)ft_strlen(s1);
		j = 0;
		strjoin = (char *)malloc(sizeof(char) * (i + (int)ft_strlen(s2) + 1));
		if (strjoin == NULL)
			return (NULL);
		strjoin = ft_strcpy(strjoin, s1);
		while (s2[j] != 0)
		{
			strjoin[i + j] = s2[j];
			j++;
		}
		strjoin[i + j] = 0;
		return (strjoin);
	}
	return (NULL);
}

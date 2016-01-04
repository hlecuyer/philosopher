/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:11:35 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 18:02:27 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0 && s1 && s2)
	{
		while (s1[i] == s2[i] && n > i && s1[i] != 0)
			i++;
		if (i == n)
			return (0);
		return (s1[i] - s2[i]);
	}
	return (0);
}

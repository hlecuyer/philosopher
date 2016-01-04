/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:44:23 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 18:02:47 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
	return (s1);
}

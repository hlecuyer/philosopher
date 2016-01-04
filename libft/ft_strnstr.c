/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:55:44 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/08 18:04:11 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*str2 == 0)
		return ((char *)str1);
	while (str1[i] != 0 && i < n)
	{
		while (str1[i + j] == str2[j] && (i + j) < n && str1[i + j] != 0)
			j++;
		if (str2[j] == 0)
			return ((char *)&str1[i]);
		j = 0;
		i++;
	}
	return (0);
}

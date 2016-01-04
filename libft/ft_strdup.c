/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:10:57 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/02/19 12:02:06 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(sizeof(s1) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, (char *)s1);
	return (str);
}

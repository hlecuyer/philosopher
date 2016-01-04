/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:04:16 by hlecuyer          #+#    #+#             */
/*   Updated: 2014/04/21 16:35:04 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_max_neg_num(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	str = "-2147483648";
	return (str);
}

char		*ft_memalloc_nbr(int n, int sign, int *nbr_chr)
{
	char	*str;
	int		nbr_char;

	nbr_char = 1;
	n = sign * n;
	while (n >= 10)
	{
		nbr_char++;
		n = n / 10;
	}
	if (sign == -1)
		nbr_char = nbr_char + 1;
	str = (char *)malloc(sizeof(char) * (nbr_char + 1));
	if (str == NULL)
		return (NULL);
	*nbr_chr = nbr_char;
	return (str);
}

char		*ft_cpy_nbr(char *str, int n, int nbr_chr)
{
	str[nbr_chr] = 0;
	nbr_chr--;
	while (n > 9)
	{
		str[nbr_chr] = (n % 10) + '0';
		n = n / 10;
		nbr_chr--;
	}
	str[nbr_chr] = n + '0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		nbr_chr;

	nbr_chr = 0;
	sign = 1;
	if (n == -2147483648)
		return (ft_max_neg_num());
	if (n < 0)
		sign = -1;
	str = ft_memalloc_nbr(n, sign, &nbr_chr);
	if (str == NULL)
		return (NULL);
	n = sign * n;
	str = ft_cpy_nbr(str, n, nbr_chr);
	if (sign == -1)
		str[0] = '-';
	return (str);
}

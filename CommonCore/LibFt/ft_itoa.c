/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:02:22 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 00:01:58 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lengthnbr(long nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		length++;
	while (nbr != '\0')
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	length;
	long	nbr;

	nbr = n;
	length = ft_lengthnbr(nbr);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	else
	{
		while (length > 0 && nbr != 0)
		{
			length--;
			str[length] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
	}
	return (str);
}

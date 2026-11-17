/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:17:26 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-17 15:17:26 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	La fonction teste si une valeur entière correspond à un caractère ASCII 
	sur 7 bits.
*/
int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "df dhgsfA9";
	printf("%d", ft_isascii(str));
	return (0);	
}*/
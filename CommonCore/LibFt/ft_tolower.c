/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:42 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 19:41:09 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de convertir une lettre majuscule en lettre minuscule. 
*/
char	*ft_tolower(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "cBonjouTousxx";
	printf("%s", ft_tolower(str));
	return (0);	
}*/
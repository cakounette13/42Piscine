/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:52 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 19:41:14 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de convertir une lettre minuscule en lettre majuscule. 
*/
char	*ft_toupper(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
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
	char	str[] = "cBonjoutousxx";
	printf("%s", ft_toupper(str));
	
	return (0);	
}*/
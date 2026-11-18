/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:42 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 12:17:32 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de convertir une lettre majuscule en lettre minuscule. 
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	else
		return (c);
	return (c);
}
/*
int	main(void)
{
	char	c = "A";
	printf("%s", ft_tolower(c));
	return (0);	
}*/
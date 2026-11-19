/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:52 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 12:16:47 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de convertir une lettre minuscule en lettre majuscule. 
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	else
	{
		return (c);
	}
	return (c);
}
/*
int	main(void)
{
	char	str[] = "cBonjoutousxx";
	printf("%s", ft_toupper(str));
	
	return (0);	
}*/
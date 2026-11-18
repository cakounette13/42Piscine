/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:16:53 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 11:52:01 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de tester si un caractère est alpha-numérique ou non.
	Un caractère sera considéré comme alpha-numérique s'il est une lettre 
	(minuscule ou majuscule) ou un chiffre.
*/
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c = "1";
	printf("%d", ft_isalnum(c));
	return (0);	
}*/
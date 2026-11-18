/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:17:13 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 11:43:44 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
Cette fonction permet de tester si un caractère est alphabétique ou non. Un 
caractère sera considéré comme alphabétique s'il est de lettres minuscules ou 
de lettres majuscules.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c = "B";
	printf("%d", ft_isalpha(c));
	return (0);	
}*/
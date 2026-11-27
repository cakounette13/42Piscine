/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:22 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/27 13:22:21 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de comparer deux chaînes de caractères et de savoir
	si la première est inférieure, égale ou supérieure à la seconde. Cette 
	comparaison sera faite dans l'ordre lexicographique (et donc, en tenant 
	compte des valeurs ASCII des différents caractères comparés). Néanmoins la 
	comparaison se fera au maximum sur les length premiers caractères.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < length && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

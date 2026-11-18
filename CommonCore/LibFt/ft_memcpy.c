/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:19:18 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 11:00:15 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre
	source, et dont la taille est spécifiée via le paramètre size, dans un nouvel
	emplacement désigné par le paramètre destination. Il est bien entendu qu'il 
	est de votre responsabilité d'allouer suffisamment de mémoire pour le bloc de
	destination afin qu'il puisse contenir toutes les données.
	En cas de chevauchement des deux blocs de mémoire (source et destination) le
	comportement de la fonction memcpy n'est pas garanti. Dans ce cas, veuillez 
	préférer l'utilisation de la fonction memmove. 
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*result;
	unsigned char	*str;

	if (!src || n == 0)
		return (dest);
	result = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (n-- > 0)
	{
		*result++ = *str++;
	}
	return (dest);
}

/*
int main(void)
{
	size_t  n = 8;
	char   dest[n];
	char src[] = "piscine";

	ft_memcpy(dest, src, n);
	return (0);
}
*/
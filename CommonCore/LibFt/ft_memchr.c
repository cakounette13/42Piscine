/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:18:40 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 11:32:27 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Recherche la première occurence d'une valeur typée int, mais interprétée 
	en tant que char, dans un bloc de mémoire. Comme on traite un bloc de 
	mémoire et non pas une chaîne de caractères, nous devons aussi spécifier à 
	la fonction la taille du bloc de mémoire dans lequel réaliser la recherche.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*result;

	result = (unsigned char *)s;
	if (!result || n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*result == (unsigned char)c)
			return (result);
		result++;
	}
	return (NULL);
}
/*
int main(void)
{
	char    string[] = "Bonjour les petits";
	size_t length;

	length = 0;
	while (string[length])
		length++;
	char *found = (char *)ft_memchr(string, 'z', length);
	if (found)
		printf("%s", (char *)found);
	else
		printf("Character not found\n");
	return (0);
}*/
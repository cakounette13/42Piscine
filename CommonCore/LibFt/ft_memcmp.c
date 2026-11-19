/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:18:55 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-17 15:18:55 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de comparer le contenu de deux blocs de mémoire
	spécifiés par les deux premiers paramètres de la fonction. Le troisième 
	paramètre, size, permet de spécifier le nombre d'octets sur lequel comparer 
	les deux blocs. Les octets des deux blocs sont comparés deux à deux. 
	Tant que les deux octets comparés sont égaux, la fonction passe aux deux 
	suivants. Si les deux octets comparés sont différents, alors la fonction 
	renverra lequel des deux blocs est le plus petit en termes de contenu.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "Chocola5!bxfg";
	char str2[] = "Chocolat";
	size_t n;

	n = 9;
	printf("%d", ft_memcmp(str1, str2, n));
	return (0);
}*/
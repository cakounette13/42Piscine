/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:03 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/19 23:16:35 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	La fonction concatène deux chaînes en connaissant la taille totale du
	buffer de destination. Elle retourne la taille qui aurait été nécessaire
	pour stocker le résultat complet.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	i;

	lensrc = 0;
	lendest = 0;
	i = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	while (lendest < dsize && dest[lendest] != '\0')
		lendest++;
	if (lendest == dsize)
		return (lensrc + dsize);
	while ((src[i] != '\0') && ((i + lendest + 1) < dsize))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}
/*
int	main(void)
{
	char	buffer[10] = "KooR";
	size_t	needed;

	needed = strlcat(buffer, ".fr-demo", sizeof buffer);
	printf("%s\n", buffer);
	printf("taille necessaire : %zu\n", needed);
	return (0);
}*/

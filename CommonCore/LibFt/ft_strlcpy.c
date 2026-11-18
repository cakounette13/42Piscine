/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:29:38 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 14:51:48 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	La fonction copie une chaîne en connaissant la taille totale du buffer de
	destination. Le résultat est toujours terminé par '\0' si la taille
	disponible est strictement positive.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstSize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (i < dstSize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (dstSize);
}
/*
int	main(void)
{
	char	buffer[8];
	size_t	needed = strlcpy(buffer, "KooR.fr", sizeof buffer);

	printf("%s\n", buffer);
	printf("taille source : %zu\n", needed);
	return (0);
}*/
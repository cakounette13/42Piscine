/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:29:38 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/19 17:29:15 by dcarine          ###   ########.fr       */
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
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstSize == 0)
		return (j);
	while (i < (dstSize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char	buffer[8];
	size_t	needed;

	needed = ft_strlcpy(buffer, "KooR.fr", sizeof buffer);
	printf("%s\n", buffer);
	printf("taille source : %zu\n", needed);
	return (0);
}*/

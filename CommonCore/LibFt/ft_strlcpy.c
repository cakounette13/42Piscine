/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:29:38 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 23:42:01 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	La fonction copie une chaîne en connaissant la taille totale du buffer de
	destination. Le résultat est toujours terminé par '\0' si la taille
	disponible est strictement positive.
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (size);
}

int	main(void)
{
	char	src[] = "salut";
	char	dest[3];
	
	printf("La chaine src : %s\n", src);
	ft_strlcpy(dest, src, 7);
	printf("La chaine dest : %s\n", dest);
}

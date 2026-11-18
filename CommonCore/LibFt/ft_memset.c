/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 17:40:48 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 14:39:11 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	La fonction memset() remplit les n premiers octets de la zone mémoire
	pointée par *str avec l'octet value.
*/
void	*ft_memset(void *dest, int value, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)dest;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		s[i] = value;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "bonjour";
	int		value = '2';
	size_t	n = 3;
	ft_memset(str, value, n);
	printf("La chaine : %s\n", str);
	return (0);
}*/

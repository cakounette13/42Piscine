/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:28 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/20 00:50:07 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	La fonction strnstr() repère la première occurrence de la chaîne « little »
	terminée par un caractère nul dans la chaîne « big », en ne recherchant
	pas plus de len caractères. Les caractères qui suivent un caractère nul
	(« \0 ») ne sont pas pris en compte.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != '\0' && (i < len))
	{
		while (big[i + j] == little[j] && i + j < len)
			j++;
		i++;
		j = 0;
	}
	return (0);
}

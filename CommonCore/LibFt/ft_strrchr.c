/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:35 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 17:05:29 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
 Cette fonction recherche la dernière occurrence du caractère passé en second
 paramètre dans la chaîne de caractères spécifiée via le premier paramètre.
*/
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while ((i - 1) >= 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

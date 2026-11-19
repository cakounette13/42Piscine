/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:32:51 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 16:18:30 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Cette fonction recherche la première occurrence du caractère passé en
	second paramètre dans la chaîne de caractères spécifiée via le premier
	paramètre.
*/
char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)c)
		i++;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

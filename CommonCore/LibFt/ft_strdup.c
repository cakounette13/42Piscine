/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:32:57 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 19:40:26 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de dupliquer une chaîne de caractères.
*/
char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	new_string = malloc((i + 1) * sizeof(*src));
	if (new_string == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	return (new_string);
}
/*
int	main(void)
{
	char	str[] = "ae246(*& ^%";
	printf("%s", ft_strdup(str));
	return (0);	
}*/
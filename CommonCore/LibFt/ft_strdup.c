/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:32:57 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/18 14:28:03 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de dupliquer une chaîne de caractères.
*/
char	*ft_strdup(const char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	new_string = malloc(sizeof(char) * (i + 1));
	if (new_string == NULL)
        return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
int	main(void)
{
	char	str[] = "ae246(*& ^%";
	printf("%s", ft_strdup(str));
	free(str);
	return (0);	
}*/
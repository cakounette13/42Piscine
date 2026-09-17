/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:18:30 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/17 11:14:49 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	main(void)
{
	char	src[] = "";
	char	*str2;

	str2 = ft_strdup(src);
	printf("%s", str2);
	free(str2);
	return (0);
}

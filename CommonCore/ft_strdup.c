/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:35:24 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:35:24 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
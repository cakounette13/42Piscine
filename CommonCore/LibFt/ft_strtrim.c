/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:52:46 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/22 15:18:20 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_set(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_len_set(s1[start], set))
		start++;
	while (end > start && ft_len_set(s1[end - 1], set))
		end--;
	new_str = malloc(sizeof(char) * (end - start + 1));
	if (new_str == NULL)
		return (NULL);
	while (start < end)
	{
		new_str[i] = s1[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

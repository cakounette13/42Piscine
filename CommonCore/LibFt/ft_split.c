/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:21:49 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/27 10:52:10 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char set)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && set == str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] && set != str[i])
			i++;
	}
	return (count);
}

static void	free_split(char **split, size_t j)
{
	while (j > 0)
		free(split[--j]);
	free(split);
}

static int	fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			split[j] = ft_substr(s, i, len);
			if (!split[j])
				return (free_split(split, j), 0);
			j++;
			i += len;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_split(split, s, c))
		return (NULL);
	return (split);
}
/*
int	main(void)
{
	char	**tab = ft_split("  tripouille  42  ", ' ');
	printf("%s, ", tab[0]);
	printf("%s\n||||\n", tab[1]);
	tab = ft_split("tripouille", '\0');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split("     ", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split("chinimala", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split("", ' ');
	printf("%s\n||||\n, ", tab[0]);
	char **tab = ft_split("tripouille", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split("tripouille ", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split(" tripouille", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split(" tripouille ", ' ');
	printf("%s\n||||\n, ", tab[0]);
	tab = ft_split("--1-2--3---4----5-----42", '-');
	printf("%s, ", tab[0]);
	printf("%s, ", tab[1]);
	printf("%s, ", tab[2]);
	printf("%s, ", tab[3]);
	printf("%s, ", tab[4]);
	printf("%s, ", tab[5]);
	printf("%s, ", tab[6]);
	return (0);
}*/

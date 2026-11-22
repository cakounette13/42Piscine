/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:21:49 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/22 19:37:15 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char set)
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

void	free_all(char **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return ;
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			while (s[i + k] && s[i + k] != c)
				k++;
			split[j++] = ft_substr(&s[i], 0, k);
			i += k;
			k = 0;
		}
		if (s[i] != '\0')
			i++;
	}
	split[j] = 0;
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
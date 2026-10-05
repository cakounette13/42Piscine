/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:37:34 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/16 16:26:10 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

// Dit si un caractère appartient à charset
// On parcourt charset ; si le caractère testé s'y trouve, on renvoie 1, sinon 0.
int is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/*
Compte les mots pour dimensionner le tableau
Algorithme en trois temps, répété jusqu'à la fin de str :
1. sauter tous les séparateurs ;
2. si on n'est pas à la fin, on a trouvé un début de mot, donc count++ ;
3. avancer jusqu'à la fin de ce mot (prochain séparateur ou '\0').
*/
int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (count);
}

/*
Alloue et copie un mot de longueur donnée.
malloc(len + 1), copie des len caractères, puis '\0'. Si malloc échoue, on renvoie NULL.
*/
char *word_dup(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void free_all(char **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/*
Parcourt str et remplit le tableau tab avec les mots trouvés.
Même parcours que count_words, mais au lieu de compter, on mesure la longueur du mot (len) et on le duplique dans tab[j]. À la fin, on met tab[j] = NULL. Si une allocation échoue, on libère tout ce qui a déjà été alloué.
*/
int fill_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		len = 0;
		while (str[i + len] && !is_sep(str[i + len], charset))
			len++;
		if (len > 0)
		{
			tab[j] = word_dup(&str[i], len);
			if (!tab[j])
			{
				free_all(tab, j);
				return (0);
			}
			j++;
			i += len;
		}
	}
	tab[j] = NULL;
	return (1);
}

/*
Alloue le tableau (count_words + 1), appelle fill_tab, renvoie le résultat.
*/
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	tab = malloc(sizeof(char*) * count_words(str, charset) + 1);
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, str, charset))
	{
		return (NULL);
	}
	return (tab);
}

int	main(void)
{
	char	*str;
	char	*charset;
	char	**result;
	int		i;

	i = 0;
	str = "Bienvenueal'ecole42";
	charset = "4Ba";
	result = ft_split(str, charset);
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= '\0')
	{
		str[i];
		i++;
	}
	return (i);	
}
// Separe les mots selon le separateur et les comptes
int	ft_separate_words(char *str, char *charset)
{
	int	i;
	int	nbr_words;

	i = 0;
	nbr_words = 0;
	while (*str)
    {
        if (*str != *charset && i == 0)
        {
            i = 1;
            nbr_words++;
        }
        else if (*str == *charset)
        {
            i = 0;
        }
        str++;
    }
    printf("%d", nbr_words);
	return (nbr_words);
}

int	copy_strings(char **tab, char *str, char *carset)
{
	int	lenght;
	int	i;

	i = 0;
	while (*str)
	{
		lenght = 0;
		while (*str == *carset)
			str++;
		while (*str != *carset)
		{
			lenght++;
			str++;
		}
		if (lenght)
		{
			if (malloc(tab, i, lenght + 1))
				return 1;
		}				
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int	size_tab_2;
	int	i;
	int	j;

	size_tab_2 = ft_separate_words(str, charset);
	tab = malloc(sizeof(char) * size_tab_2 + 1);
	if (tab == NULL)
		return NULL;
	tab[size_tab_2] = '\0';
	copy_strings(tab, str, charset);	
}

int	main(void)
{
	char	*str;
	char	*charset;

	str = "Bienvenue a l'ecole 42";
	charset = "4ba";
	ft_split(str, charset);
	return (0);
}

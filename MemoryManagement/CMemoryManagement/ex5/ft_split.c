/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:37:34 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/15 16:29:10 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlenght(char *str)
{
	char	*tab;
	int	i;

	i = 0;
	while (str[i] <= '\0')
	{
		tab[i] = str[i];
		i++;
	}
	return (i);	
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	*tab;

	tab = malloc(sizeof(char) * (ft_strlenght(str)));
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (charset[i] != '\0')
	{
		j = 0;
		while (str[j] == charset[i])
			{
				tab[i] = str[j];
				j++;
			}
		
		i++;
	}
}

int	main(void)
{
	char	*str;
	char	*charset;

	str = "Bienvenue a l'ecole 42";
	charset = "en";

	ft_split(str, charset);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-14 14:41:51 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-14 14:41:51 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

// Calcul de la longueur d'une chaîne de caractères
int ft_strlen(char *string)
{
    int i;

    i = 0;
    while (string[i])
        i++;
    return (i);
}

// Duplication d'une chaîne de caractères
char    *ft_strdup(char *string)
{
    int i;
    char    *string2;

    i = 0;
    string2 = malloc(sizeof(char) * (ft_strlen(string) + 1));
    if (!string2)
        return NULL;
    while (string[i] != '\0')
    {
        string2[i] = string[i];
        i++;
    }
    string2[i] = '\0';
    return (string2);    
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    
    t_stock_str     *tab;

    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!tab)
        return NULL;
    i = 0;
    while (i < ac)
    {
        tab[i].size = ft_strlen(av[i]);
        tab[i].string = av[i];
        tab[i].copy = ft_strdup(av[i]);
        if (tab[i].copy == NULL)
        {
            while (i > 0)            
                free(tab[--i].copy);
            free(tab);
            return NULL;
        }
        i++;
    }
    tab[i].size = 0;
    tab[i].string = NULL;
    tab[i].copy = NULL;
    return (tab);
}

int main(void)
{
    char    *av[] = {"framboise", "fraise"};
    int     ac = 2;

    t_stock_str *result_tab;
    result_tab = ft_strs_to_tab(ac, av);
   if (!result_tab)
	{
		printf("Erreur d'allocation mémoire.\n");
		return (1);
	}

	// 3. Boucle d'affichage du résultat
	// On s'arrête dès que la sentinelle (str == 0) est atteinte
	int i = 0;
	printf("--- CONTENU DU TABLEAU DE STRUCTURES ---\n");
	while (result_tab[i].string != 0)
	{
		printf("Structure [%d] :\n", i);
		printf("  -> size : %d\n", result_tab[i].size);
		printf("  -> str  : %s (Adresse d'origine : %p)\n", result_tab[i].string, (void*)result_tab[i].string);
		printf("  -> copy : %s (Nouvelle adresse   : %p)\n\n", result_tab[i].copy, (void*)result_tab[i].copy);
		i++;
	}

	// 4. Libération propre de la mémoire allouée
	i = 0;
	while (i < ac)
	{
		free(result_tab[i].copy); // On libère chaque copie de chaîne
		i++;
	}
	free(result_tab); // On libère le tableau de structures lui-même

	return (0);
}
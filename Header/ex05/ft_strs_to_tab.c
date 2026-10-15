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
    
    s_stock_str     *tab;

    tab = malloc(sizeof(s_stock_str) * (ac + 1));
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
    tab[i].size = '\0';
    tab[i].string = NULL;
    tab[i].copy = NULL;
    return (tab);
}
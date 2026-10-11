/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-08 11:02:10 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-08 11:02:10 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    int i;
    int j;

    // Si la sous-chaîne à chercher est vide, on renvoie NULL
    if (to_find[0] == '\0') {
        return (str);
    }
    i = 0;
    // On parcourt la chaîne principale
    while (str[i] != '\0') 
    {
        j = 0;
        // On compare les caractères suivants tant qu'ils sont identiques
        while (str[i + j] != '\0' && str[i + j] == to_find[j]) 
        {
            j++;
            // Si on est arrivé au bout de la sous-chaîne, c'est qu'on a trouvé la correspondance complète !
            if (to_find[j] == '\0') {
                return (&str[i]);
            }
            i++;
        }
    }
    // Si on a parcouru toute la chaîne sans trouver, on renvoie NULL
    return (NULL);
}

int main(void) {
    char str[] = "Developpez votre logique";
    char to_find[] = "voltari";
    char *res = ft_strstr(str, to_find);
    
    if (res != NULL) {
        printf("Word '%s' found!\n", to_find);
    } else {
        printf("The word '%s' was not found.\n", to_find);
    }
    return 0;
}
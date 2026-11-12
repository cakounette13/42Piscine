/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:44:07 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:44:07 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
    Recherche la première occurence d'une valeur typée int, mais interprétée en tant que char, dans un bloc de mémoire. Comme on traite un bloc de mémoire et non pas une chaîne de caractères, nous devons aussi spécifier à la fonction la taille du bloc de mémoire dans lequel réaliser la recherche.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char    *result;

    result = (unsigned char *)s;
    i = 0;
    if (result == NULL)
        return (NULL);
    while (i < n)
    {
        if (result[i] == (unsigned char)c)
            return (&result[i]);
        i++;
    }
    return (NULL);
}
/*
int main(void)
{
    char    string[] = "Bonjour les petits";
    size_t length;

    length = 0;
    while (string[length])
        length++;
    char *found = (char *)ft_memchr(string, 'z', length);
    if (found)
        printf("%s", (char *)found);
    else
        printf("Character not found\n");
    return (0);
}*/
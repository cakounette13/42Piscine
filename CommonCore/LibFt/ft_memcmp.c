/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:44:20 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:44:20 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
    Cette fonction permet de comparer le contenu de deux blocs de mémoire spécifiés par les deux premiers paramètres de la fonction. Le troisième paramètre, size, permet de spécifier le nombre d'octets sur lequel comparer les deux blocs. Les octets des deux blocs sont comparés deux à deux. Tant que les deux octets comparés sont égaux, la fonction passe aux deux suivants. Si les deux octets comparés sont différents, alors la fonction renvérra lequel des deux blocs est le plus petit en termes de contenu.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{   
    unsigned char *length1;
    unsigned char *length2;
    size_t i;

    i = 0;
    length1 = (unsigned char *)s1;
    length2 = (unsigned char *)s2;
    while (i < n)
    {
        if (length1[i] != length2[i])
            return (length1[i] - length2[i]);
        i++;
    }    
    return (0);          
}
/*
int main(void)
{
    char str1[] = "Chocola5!bxfg";
    char str2[] = "Chocolat";
    size_t n;

    n = 9;
    printf("%d", ft_memcmp(str1, str2, n));
    return (0);
}*/
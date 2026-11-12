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
    int length1;

    length1 = sizeof((char *)s1);
    length2
}

int main(void)
{
    char str1[] = "Chocolat";
    char str2[] = "Bonbon";
    size_t n;

    n = 15;
    ft_memcmp(str1, str2, n);
    return (0);
} 
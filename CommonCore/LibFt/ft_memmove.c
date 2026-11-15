/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:44:34 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:44:34 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
    Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre source dans un nouvel emplacement désigné par le paramètre destination. On peut donc dire que cette fonction est proche de la fonction memcpy. Néanmoins, la différence réside dans le fait que la fonction memmove accepte que les deux zones de mémoire puissent se chevaucher.

    En cas de chevauchement, la copie se passe comme si les octets de la zone source étaient d'abord copiés dans une zone temporaire, qui ne chevauche aucune des deux zones pointées par source et destination, et les octets sont ensuite copiés de la zone temporaire vers la zone de destination.
*/
void	*ft_memmove(void *dest, const void *src, size_t length)
{
    unsigned char   *result;
    unsigned char   *str;
    unsigned char   temp[length];
    size_t  i;
    
    i = 0;
    result = (unsigned char *)dest;
    str = (unsigned char *)src;
    if (result == NULL || str == NULL)
        return (NULL);
    while (i < length)
    {
        temp[i] = str[i];
        result[i] = temp[i];
        i++;
    }
    return (result);
}

int main(void)
{
    size_t  lenght = 4;
    char   dest[lenght];
    char src[] = "piscine";

    ft_memmove(dest, src, lenght);
    return (0);
}
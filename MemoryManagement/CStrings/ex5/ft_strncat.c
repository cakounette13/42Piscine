/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-08 09:38:44 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-08 09:38:44 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[] = "Bonjour ";
    char src[] = "tous le monde!";
    unsigned int nb = 1;
    ft_strncat(dest, src, nb);
    printf("%s\n", dest); // Output: Bonjour tous l
    return (0);
}
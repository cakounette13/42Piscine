/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:44:40 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:44:40 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
    La fonction memset() remplit les n premiers octets de la zone mémoire pointée par *str avec l'octet value.
*/
void	*ft_memset(void *str, int value, size_t n)
{
    size_t i;
    unsigned char    *s;

    i = 0;
    s = (unsigned char *)str;
    if (s == NULL)
        return NULL;    
    while (i < n)
    {
        s[i] = value;
        i++;
    }
    return (s);
}

int main(void)
{
    size_t n = 3;
	char str[] = "bonjour";
    int value = 2;

	ft_memset(str, value, n);
	printf("La chaine : %s\n", str);
	return (0);
}
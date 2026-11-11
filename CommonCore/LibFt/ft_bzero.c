/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:43:04 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:43:04 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La  fonction bzero() met à 0 les n premiers octets du bloc pointé par s
       (octets contenant « \0 »).
*/
void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char    *str;

    i = 0;
    str = (char *)s;
    if (str == NULL)
        return ;    
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
int main(void)
{
    int n = 7;
	char s[] = "bonjour";

	printf("La chaine : %s\n", s);
	ft_bzero(s, n);
	printf("La chaine : %s\n", s);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine                            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-07 11:19:23 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-07 11:19:23 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int src_len;
    int i = 0;

    src_len = ft_strlen(src); // Get the length of the source string
    dest = malloc(sizeof(char) * (n + 1));
    if (dest == NULL)
        return (NULL); // Memory allocation failed
    if (n < src_len)
    {
        while (src[i] != '\0' && i <= n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    if (n > src_len)
    {
        while (src[i] != '\0' && i <= src_len)
        {
            dest[i] = src[i];
            i++;
        }
        while (i <= n)
        {
            dest[i] = '\0'; // Fill the rest of dest with null characters
            i++;
        }
    }
    if (n == src_len)
    {
        while (src[i] != '\0' && i <= n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    dest[n] = '\0'; // Null-terminate the destination string
    return (dest);
}

int main(void)
{
    char src[] = "Hello, World!";
    char *dest;
    unsigned int n = 3; // Number of characters to copy

    char *result = ft_strncpy(dest, src, n);
    printf("Copied string: %s\n", result);
    free(result); // Don't forget to free the allocated memory
    return (0);
}
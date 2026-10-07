/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-07 16:34:45 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-07 16:34:45 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    char *s3 = "World";
    char *s4 = "Hello, World!";
    char *s5 = "Salut";
    int n = 5;

    printf("Comparing '%s' and '%s' with n='%d': %d\n", s1, s2, n, ft_strncmp(s1, s2, n)); // Should return a null value
    printf("Comparing '%s' and '%s' with n=%d: %d\n", s1, s3, n, ft_strncmp(s1, s3, n)); // Should return a negative value
    printf("Comparing '%s' and '%s' with n=%d: %d\n", s3, s1, n, ft_strncmp(s3, s1, n)); // Should return a positive value
    printf("Comparing '%s' and '%s' with n=%d: %d\n", s5, s4, n, ft_strncmp(s5, s4, n)); // Should return a positive value
    printf("Comparing '%s' and '%s' with n=%d: %d\n", s1, s5, n, ft_strncmp(s1, s5, n)); // Should return a negative value
    return 0;
}
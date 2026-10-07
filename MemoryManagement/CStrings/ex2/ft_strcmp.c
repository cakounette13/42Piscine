/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-07 15:39:42 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-07 15:39:42 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i= 0;
    while (s1[i] != '\0' && s2[i] != '\0')
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
    char *s5 = "Hello";

    printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2)); // Should return 0
    printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3)); // Should return a negative value
    printf("Comparing '%s' and '%s': %d\n", s3, s1, ft_strcmp(s3, s1)); // Should return a positive value
    printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strcmp(s1, s4)); // Should return a negative value
    printf("Comparing '%s' and '%s': %d\n", s1, s5, ft_strcmp(s1, s5)); // Should return 0
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-06 10:35:57 by user              #+#    #+#             */
/*   Updated: 2026-10-06 10:35:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

// function to calculate the length of a string
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

// Function to check if the base is valid
int ft_is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    if (ft_strlen(base) < 2)
        return (0);
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return (0);
        j = i + 1;
        // boucle pour contrôler si le caractère est unique dans la base
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

// Function to control the bases
int ft_control_base(char *base_from, char *base_to)
{
    if (base_from == NULL || base_to == NULL)
        return (0);
    if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
        return (0);
    if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
        return (0);
    return (1);
}

// Function to convert a number in base_from to an integer
int ft_atoi_base(char *str, char *base_from)
{
    int base_len;
    int i;
    int sign;
    int result;

    base_len = ft_strlen(base_from);
    i = 0;
    sign = 1;
    result = 0;

    // Skip whitespace
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    
    // Handle sign
    while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert number
    while (str[i] != '\0')
    {
        int j;

        j = 0;
        while (base_from[j] != '\0' && base_from[j] != str[i])
            j++;
        if (base_from[j] == '\0') // Character not found in base
            break;
        result = result * base_len + j;
        i++;
    }
    return (result * sign);
}

char *ft_itoa_base(int nbr, char *base_to)
{
    int base_len;
    int num;
    int len;
    char *result;

    base_len = ft_strlen(base_to);
    num = nbr;
    if (nbr <= 0)
        len = 1; // Account for negative sign or zero
    else
        len = 0;
   
    // Calculate length of the result string
    while (num != 0)
    {
        num /= base_len;
        len++;
    }

    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    
    if (nbr == 0)
        result[0] = base_to[0];
    
    if (nbr < 0)
        nbr = -nbr;

    result[len] = '\0';
    while (nbr > 0)
    {
        len--;
        result[len] = base_to[nbr % base_len];
        nbr /= base_len;
    }
    
    if (len == 1) // Handle negative sign
    {
        len--;
        result[len] = '-';
    }
    return (result);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char **result;

    if (!ft_control_base(base_from, base_to))
        return (0);
    int num = ft_atoi_base(nbr, base_from);
    *result = ft_itoa_base(num, base_to);
    return (*result);
}

int main()
{
    char *nbr = "2F";
    char *base_from = "0123456789ABCDEF";
    char *base_to = "0123456789";
    char *result = ft_convert_base(nbr, base_from, base_to);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
    {
        printf("Invalid base or conversion error.\n");
    }
    return 0;
}
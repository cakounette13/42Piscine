/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-09 13:55:31 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-09 13:55:31 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

// Fonction pour vérifier chaque caractère de la string
int ft_atoi(char *str)
{
    int sign;

    sign = 1;
    // Vérifie si caractères égaux aux signes + ou - ou des espaces
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-') // si signe moins compte le nbr de signe -
            sign *= -1; // mets le signe - si nombre impair
        str++;
    }
    if (sign == -1 && *str >= '0' && *str <= '9')
        write(1, "-", 1);
    while (*str >= '0' && *str <= '9') // Si nombre, on ecrit le nombre sous forme de caractère
    {
        write(1, str, 1);
        str++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i;
       
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
    }
    printf("%s", ft_atoi(argv[1]));
    return (0);
}
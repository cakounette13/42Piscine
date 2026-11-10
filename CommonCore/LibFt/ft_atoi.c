/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:24:19 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:24:19 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
    Elle convertit une chaîne de caractères en entier (int) en gérant les espaces initiaux, les signes + ou -, puis la suite de chiffres.
*/
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    // Vérifie si caractères égaux aux signes + ou - ou des espaces
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-') // si signe moins compte le nbr de signe -
            sign *= -1; // mets le signe - si nombre impair
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') // Si nombre, on ecrit le nombre sous forme de caractère
    {
        result = result * 10 + (str[i] - '0'); 
        i++;
    }
    return (result * sign);
}
/*
int main(int argc, char **argv)
{
    int i;
       
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
    }
    printf("%d", ft_atoi(argv[1]));
    return (0);
}*/
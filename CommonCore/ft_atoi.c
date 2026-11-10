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
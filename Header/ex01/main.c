/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-09 16:21:28 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-09 16:21:28 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_boolean.h"

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

t_bool  ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
    (void)argv;

    if (ft_is_even(argc-1) == TRUE) // Erreur sur cette partie de code (argc-1) ça donne toujours 1 mettre argv[1] à la place ppour que cela fonctionne
        ft_putstr(EVEN_MSG); // nbr pair
    else
        ft_putstr(ODD_MSG); // nbr impair
    return (SUCCESS);
}
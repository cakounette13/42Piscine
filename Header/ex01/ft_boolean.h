/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-09 16:28:53 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-09 16:28:53 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

// Constantes et macros
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define EVEN(nbr) (((nbr) % 2) == 0)

// Définitions de types
typedef enum t_bool
{
   FALSE = 0,
   TRUE = 1
}  t_bool;

// Protopypes
void    ft_putstr(char *str);
t_bool  ft_is_even(int nbr);

#endif
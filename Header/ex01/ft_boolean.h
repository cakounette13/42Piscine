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
#define FALSE 0
#define TRUE 1

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

// Définitions de types
typedef int t_bool;

#define EVEN(n) ((n) % 2)

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-12 18:35:45 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-12 18:35:45 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

typedef struct Value
{
    int value;
} Nombre;

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))
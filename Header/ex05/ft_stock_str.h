/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-14 15:02:26 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-14 15:02:26 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
    int size;
    char    *string;
    char    *copy;
}   s_stock_str;

#endif
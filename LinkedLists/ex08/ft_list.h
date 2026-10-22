/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 14:01:06 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-15 14:01:06 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;    
}                   t_list;

void ft_list_reverse(t_list **begin_list);

#endif
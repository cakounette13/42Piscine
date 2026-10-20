/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-20 12:38:30 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-20 12:38:30 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list  *elem = data;

    elem = malloc(sizeof(t_list));
    if (elem == NULL)
        return NULL;
    elem->data = data;
    elem->next = NULL;
    return (elem);
}

t_list  *ft_list_push_strs(int size, char **strs)
{

}

int main(void)
{
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 14:05:05 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-15 14:05:05 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list  *l;
    l = malloc(sizeof(t_list));
    if (l == NULL)
        return (NULL);

    l->data = data;
    l->next = NULL;
    return (l);
}

int main(void)
{
    char *data = "bonjour";
    ft_create_elem(data);
    return (0);
}
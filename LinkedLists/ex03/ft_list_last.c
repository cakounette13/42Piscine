/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-19 18:46:14 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-19 18:46:14 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list  *l;

    l = (t_list *)malloc(sizeof(t_list));
    if (l == NULL)
        return (NULL);
    l->data = data;
    l->next = NULL;
    return (l);
}

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_data;
    
    new_data = ft_create_elem(data);
    if (new_data == NULL)
        return ;
    new_data->next = *begin_list;
    *begin_list = new_data;
}

void free_malloc(t_list **begin_list)
{
    t_list *current;
    t_list *next;

    if (begin_list == NULL)
    {
        return ;
    }
    current = *begin_list;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *begin_list = NULL;
}

t_list  *ft_list_last(t_list *begin_list)
{
    t_list *current = begin_list;

    if (current == NULL)
        return (NULL) ;
    while (current->next != NULL)
    {
        current = current->next;
    }
    return (current);
}

int main()
{
    t_list *ma_liste = NULL;
    t_list *last;

	ft_list_push_front(&ma_liste, "troizieme");
	ft_list_push_front(&ma_liste, "deuxieme");
	ft_list_push_front(&ma_liste, "premier");
    last = ft_list_last(ma_liste);
    printf("%s\n", (char *)last->data);
    free_malloc(&ma_liste);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-18 18:19:41 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-18 18:19:41 by Delrieux Carine  ###   ########.fr       */
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

int ft_list_size(t_list *begin_list)
{
    t_list *current = begin_list;
    t_list  *next;
    int i;

    i = 0;
    while (current != NULL)
    {
        next = current->next;
        i++;
        current = next;
    }
    return (i);
}

int main()
{
    t_list *ma_liste = NULL;
	ft_list_push_front(&ma_liste, "troizième");
	ft_list_push_front(&ma_liste, "deuxième");
	ft_list_push_front(&ma_liste, "premier");
    printf("%d\n", ft_list_size(ma_liste));
    free_malloc(&ma_liste);
    return (0);
}
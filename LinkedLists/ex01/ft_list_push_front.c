/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 16:10:48 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-15 16:10:48 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    // Allocation mémoire pour la structure du noeud
    t_list *elem = malloc(sizeof(t_list));
    // Sécurité si le malloc échoue
    if (elem == NULL)
        return (NULL);
    // attribution de la donnée dans la variable du noeud
    elem->data = data;
    // Pointeur suivant à NULL
    elem->next = NULL;
    // Retour du pointeur vers le nouveau noeud créé
    return (elem);
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

int main(void)
{
	t_list *ma_liste = NULL;
	ft_list_push_front(&ma_liste, "troizième");
	ft_list_push_front(&ma_liste, "deuxième");
	ft_list_push_front(&ma_liste, "premier");
    free_malloc(&ma_liste);
    return (0);
}
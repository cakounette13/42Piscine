/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-20 08:59:07 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-20 08:59:07 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *elem;

    elem = malloc(sizeof(t_list));
    if (elem == NULL)
        return (NULL);
    elem->data = data;
    elem->next = NULL;
    return (elem);
}

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *elem = *begin_list;
    
    if (elem == NULL)
        return ;
    while (elem->next != NULL)
        elem = elem->next;
    if (elem->next == NULL)
        elem->next = ft_create_elem(data);
}

int main(void)
{
    t_list *ma_liste = NULL;
    t_list *current;
    t_list *next;

    ma_liste = ft_create_elem("bonjour");
    ft_list_push_back(&ma_liste, "salut");
    ft_list_push_back(&ma_liste, "Hello");
    current = ma_liste;
    // Affichage des éléments
    while (current)
    {
        printf("%s\n", (char *)current->data);
        current = current->next;
    }
    current = ma_liste;
    while (current != NULL)
    {
        next = current->next; // On sauvegarde le pointeur suivant avant de détruire l'actuel
        free(current);             // On libère la structure t_list actuelle
        current = next;       // On passe au pointeur sauvegardé
    }
    ma_liste = NULL;
    return (0);
}
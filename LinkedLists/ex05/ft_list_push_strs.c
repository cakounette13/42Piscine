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
    t_list *elem;
    t_list *begin_list;
    int i;

    i = 0;
    while (i < size)
    {
        elem = ft_create_elem(&*strs[i]);
        if (elem == NULL)
            return NULL;
        elem->next = begin_list;
        begin_list = elem;
        i++;
    }
    return (elem);
}

int main(void)
{   
    char *strs[] = {"Ola", "Hello", "Bonjour"};
    int size = 3;
    t_list *ma_liste;
    t_list *current;
    t_list *next;

    ma_liste = ft_list_push_strs(size, strs);
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
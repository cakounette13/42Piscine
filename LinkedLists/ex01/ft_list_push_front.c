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
    t_list *new_data = data;
    
    if (new_data == NULL)
        return ;
    new_data->next = *begin_list;
    *begin_list = new_data;
}

void free_malloc(t_list **begin_list, void *data)
{
    t_list *list_data = data;
    if (*begin_list == NULL)
    {
        exit(EXIT_FAILURE);
    }
    if (*begin_list != NULL)
    {
        t_list *ma_liste = *begin_list;
        *begin_list = list_data->next;
        free(ma_liste);
    }
}

int main(void)
{
    // Initialisation de la liste à vide
	t_list *ma_liste = NULL;
	// Création de données allouées dynamiquement	
    char *str1 = "Troisieme";
	char *str2 = "Deuxieme";
	char *str3 = "Premier";
    // Création des nœuds et ajout dans la liste
	// On ajoute au début de la liste chaque element
	ft_list_push_front(&ma_liste, ft_create_elem(str1));
	ft_list_push_front(&ma_liste, ft_create_elem(str2));
	ft_list_push_front(&ma_liste, ft_create_elem(str3));
    free_malloc(&ma_liste, &str1);
    free_malloc(&ma_liste, &str2);
    free_malloc(&ma_liste, &str3);
    return (0);
}
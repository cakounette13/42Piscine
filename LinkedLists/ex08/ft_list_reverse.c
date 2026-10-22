/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-22 08:33:26 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-22 08:33:26 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *next;
    t_list *current;
    t_list *previous;
   
    current = *begin_list;
    previous = NULL;
    if (current == NULL)
        return ;
    while (current != NULL)
    {
        // On sauvegarde l'avenir du pointeur en stockant le pointeur suivant
        next = current->next;
        // On inverse le pointeur pour qu'il pointe sur l'élément précédent
        current->next = previous;
        // On avance le précédent : l'élément actuel devient devient le nouveau précédent
        previous = current;
        // On avance le pointeur actuel
        current = next;
    }
    // On affecte le dernier pointeur en début de liste
    *begin_list = previous;
}

int main(void)
{
    t_list word1;
    t_list word2;
    t_list word3;
    t_list *begin_list;
       
    word1.data = "Salut ";
    word1.next = &word2;
    word2.data = "les ";
    word2.next = &word3;
    word3.data = "copains";
    word3.next = NULL;
    begin_list = &word1;
    ft_list_reverse(&begin_list);
    while (begin_list)
    {
        printf("%s\n", (char *)begin_list->data);
        begin_list = begin_list->next;
    }
    return (0);
}
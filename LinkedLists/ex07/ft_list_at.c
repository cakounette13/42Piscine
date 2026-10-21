/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-21 17:24:05 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-21 17:24:05 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *current = begin_list;
    t_list *next = begin_list->next;
    unsigned int i = 0;

    if (begin_list == NULL)
        return NULL;
    while (current->next != NULL)
    {
        next = current->next;
        if (i == (nbr - 1))
            return (current);
        current = next;
        i++;
    }
    return (current);
}

int main(void)
{
    t_list word1;
    t_list word2;
    t_list word3;
    t_list *begin_list;
    t_list *current;
    int nbr;
    
    nbr = 2;
    word1.data = "Salut ";
    word1.next = &word2;
    word2.data = "les ";
    word2.next = &word3;
    word3.data = "copains";
    word3.next = NULL;
    begin_list = &word1;
    current = ft_list_at(begin_list, nbr);
    printf("%s\n", (char *)current->data);
    return (0);
}
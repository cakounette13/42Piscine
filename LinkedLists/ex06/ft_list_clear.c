/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-20 16:45:23 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-20 16:45:23 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void    ft_list_clear(t_list *begin_list, void(*free_fct)(void*))
{
    t_list *current;
    t_list *next;

    if (begin_list == NULL || free_fct == NULL)
        return ;
    current = begin_list;   
    while (current != NULL)
    {
        next = current->next;
        free_fct(current->data);
        free(current);
        current = next;
    }
}

int main(void)
{
    t_list *word1;
    t_list *word2;
    t_list *word3;
    t_list *begin_list;
    t_list  *current;
    
    word1 = malloc(sizeof(t_list));
    word2 = malloc(sizeof(t_list));
    word3 = malloc(sizeof(t_list));
    if (!word1 || !word2 || !word3)
        return (1);
    word1->data = strdup("Salut ");
    word1->next = word2;
    word2->data = strdup("les ");
    word2->next = word3;
    word3->data = strdup("copains");
    word3->next = NULL;
    begin_list = word1;
    current = begin_list;
    while (current)
    {
        printf("%s\n", (char *)current->data);
        current = current->next;
    }
    ft_list_clear(begin_list, &free);
    return (0);
}
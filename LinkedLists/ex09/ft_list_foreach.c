/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-22 16:29:44 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-22 16:29:44 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void    ft(void *data)
{
    printf("%s\n", (char *)data);
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
    t_list  *list_ptr;

    list_ptr = begin_list;
    while (list_ptr != NULL)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
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
    ft_list_foreach(begin_list, &ft);
    return (0);
}
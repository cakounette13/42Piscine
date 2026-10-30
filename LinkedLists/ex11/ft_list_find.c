/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-30 18:44:27 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-30 18:44:27 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int ft_cmp(void *data, void *data_ref)
{
    if (data != data_ref)
        return (0);
    return (1);
}

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)(void *, void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr != NULL)
    {
        if ((*cmp)(list_ptr->data, data_ref) == 1)
            list_ptr = list_ptr->next;
        printf("%s", (char *)list_ptr->data);
        return (list_ptr);
    }
    return (list_ptr);
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
    ft_list_find(begin_list, "Salut ", ft_cmp);
    return (0);
}
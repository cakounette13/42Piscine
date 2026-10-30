/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-23 17:06:20 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-23 17:06:20 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void    ft_print(void *data)
{
    printf("%s\n", (char *)data);
}

int ft_strcmp(void *data, void *data_ref)
{
    if  (data == data_ref)
    {
        return (1);
    }
    return (0);
}

void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void*, void*))
{
    t_list  *list_ptr;

    list_ptr = begin_list;
    while (list_ptr != NULL)
    {
        if ((*cmp)(list_ptr->data, data_ref))
        {
            (*f)(list_ptr->data);
        }  
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
    ft_list_foreach_if(begin_list, ft_print, "les ", ft_strcmp);
    return (0);
}
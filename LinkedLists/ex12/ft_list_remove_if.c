/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-30 20:26:57 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-30 20:26:57 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int ft_strcmp(void *data, void *data_ref)
{
   if (data == data_ref)
        return (0);
    return (1); 
}

void    ft_free(void *data)
{
    free(data);
}

void    ft_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *), void (*free_fct)(void *))
{
    t_list  *list_ptr;

    list_ptr = *begin_list;
    list_ptr = malloc(sizeof(t_list) + 1);
    if (list_ptr == NULL)
        return ;
    while (list_ptr != NULL)
    {
        if ((*cmp)(list_ptr->data, data_ref) != 1)
        {
            if (*begin_list)
                *begin_list = list_ptr->next;            
            (*free_fct)(list_ptr->data);
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
    ft_remove_if(&begin_list, "copains", ft_strcmp, ft_free);
    return (0);
}
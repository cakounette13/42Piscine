/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-19 18:46:14 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-19 18:46:14 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list  *ft_list_last(t_list *begin_list)
{
    if (begin_list == NULL)
        return (NULL) ;
    while (begin_list->next != NULL)
    {
        begin_list = begin_list->next;
    }
    return (begin_list);
}

    int main()
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
    t_list *last_word = ft_list_last(begin_list);
	printf("%s\n", (char *)last_word->data);
    return (0);
}
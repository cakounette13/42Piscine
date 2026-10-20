/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-18 18:19:41 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-18 18:19:41 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    t_list *current = begin_list;
    t_list  *next;
    int i;

    i = 0;
    if (current == NULL)
        return (0);
    while (current != NULL)
    {
        next = current->next;
        i++;
        current = next;
    }
    return (i);
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
	printf("%d\n", ft_list_size(begin_list));
    return (0);
}
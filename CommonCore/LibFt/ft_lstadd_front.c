/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:34:30 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 17:37:05 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_data;

	new_data = ft_lstnew(new);
	new_data = malloc(sizeof(t_list));
	if (new_data == NULL)
		return ;
	new_data->next = *lst;
	*lst = new_data->content;

	return ;
}

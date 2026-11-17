/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:17:44 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-17 15:17:44 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"	
/*
	Elle vérifie si un caractère est un caractère imprimable.
*/
int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "ngsdfgae246(*& ^%";
	printf("%d", ft_isprint(str));
	return (0);	
}*/
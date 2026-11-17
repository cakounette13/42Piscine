/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:33:14 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 19:40:45 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de calculer la longueur, en nombre de caractères, de
	la chaîne de caractères.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "ngsdfgae246(*& ^%";
	printf("%d", ft_strlen(str));
	return (0);	
}*/
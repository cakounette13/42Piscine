/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:17:13 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-17 15:17:13 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
Cette fonction permet de tester si un caractère est alphabétique ou non. Un 
caractère sera considéré comme alphabétique s'il est de lettres minuscules ou 
de lettres majuscules.
*/
int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "Bonjoutousxx1";
	printf("%d", ft_isalpha(str));
	return (0);	
}*/
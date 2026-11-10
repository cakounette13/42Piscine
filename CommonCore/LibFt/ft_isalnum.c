/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:43:20 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:43:20 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de tester si un caractère est alpha-numérique ou non. Un caractère sera considéré comme alpha-numérique s'il est une lettre (minuscule ou majuscule) ou un chiffre.
*/
int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= '0' && str[i] <= '9'))
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
	printf("%d", ft_isalnum(str));
	return (0);	
}*/
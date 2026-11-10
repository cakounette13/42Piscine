/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:10:20 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:10:20 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction permet de convertir une lettre minuscule en lettre majuscule. 
*/
char	*ft_toupper(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "cBonjoutousxx";
	printf("%s", ft_toupper(str));
	
	return (0);	
}*/
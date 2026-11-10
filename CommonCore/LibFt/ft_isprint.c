/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:11:47 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:11:47 by Delrieux Carine  ###   ########.fr       */
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
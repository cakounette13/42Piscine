/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 17:57:44 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 17:57:44 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
Cette fonction permet de tester si un caractère est alphabétique ou non. Un caractère sera considéré comme alphabétique s'il est de lettres minuscules ou de lettres majuscules. Rappel : ces fonctions travaillent sur des valeurs représentables sous forme d'unsigned char (ou EOF) et leur comportement dépend de la localisation courante. Dans la localisation "C", les lettres accentuées ne sont pas considérées comme des caractères alphabétiques. 
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
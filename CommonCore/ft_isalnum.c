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
Cette fonction permet de tester si un caractère est alpha-numérique ou non. Un caractère sera considéré comme alpha-numérique s'il est une lettre (minuscule ou majuscule) ou un chiffre. Rappel : ces fonctions travaillent sur des valeurs représentables sous forme d'unsigned char (ou EOF) et leur comportement dépend de la localisation courante. Dans la localisation "C", les lettres accentuées ne sont pas considérées comme des caractères alphanumériques. 
*/
int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
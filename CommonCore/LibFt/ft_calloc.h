/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:16:39 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/17 19:39:15 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	Cette fonction alloue un bloc de mémoire en initialisant tous ces octets 
	à la valeur 0. bien que relativement proche de la fonction malloc, deux 
	aspects les différencient :
	L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors 
	que malloc ne modifie pas la zone de mémoire.
	Les paramètres d'appels : calloc requière deux paramètres (le nombre 
	d'éléments consécutifs à allouer et la taille d'un élément) alors que malloc
	attend la taille totale du bloc à allouer.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	int		i;

	(unsigned int *)result = 0;
	i = 0;
	result = malloc(sizeof(count) * size + 1);
	if (result == NULL)
		return (NULL);
	while (result[i] != "\0")
	{
		(char)result[i] = 0;
		i++;
	}
}

int	main(void)
{
	size_t	count;
	size_t	size;
	int		result;

	result = 0;
	count = 2;
	size = 5;
	result = ft_calloc(count, size);
	free(result);
	return (0);
}

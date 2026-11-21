/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:16:39 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/20 14:49:49 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include "libft.h"

// /*
// 	Cette fonction alloue un bloc de mémoire en initialisant tous ces octets
// 	à la valeur 0. bien que relativement proche de la fonction malloc, deux
// 	aspects les différencient :
// 	L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors
// 	que malloc ne modifie pas la zone de mémoire.
// 	Les paramètres d'appels : calloc requière deux paramètres (le nombre
// 	d'éléments consécutifs à allouer et la taille d'un élément) alors que malloc
// 	attend la taille totale du bloc à allouer.
// */
// void	*ft_calloc(size_t count, size_t size)
// {
// 	int	*result;
// 	int		i;

// 	i = 0;
// 	result = malloc(sizeof(count) * size);
// 	if (result == NULL)
// 		return (NULL);
// 	while (result[i] != '\0' && (size > 0))
// 	{
// 		while (count > 0)
// 		{
// 			result[i] = 0;
// 			count--;
// 			i++;
// 		}
// 	}
// 	return (NULL);
// }
// /*
// int	main(void)
// {
// 	size_t	count;
// 	size_t	size;
// 	int		result;

// 	count = 2;
// 	size = 5;
// 	result = ft_calloc(count, size);
// 	return (0);
// }*/
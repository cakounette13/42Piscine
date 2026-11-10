/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 18:43:14 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 18:43:14 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
    Cette fonction alloue un bloc de mémoire en initialisant tous ces octets à la valeur 0. Bien que relativement proche de la fonction malloc, deux aspects les différencient :

    L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors que malloc ne modifie pas la zone de mémoire.

    Les paramètres d'appels : calloc requière deux paramètres (le nombre d'éléments consécutifs à allouer et la taille d'un élément) alors que malloc attend la taille totale du bloc à allouer.
*/
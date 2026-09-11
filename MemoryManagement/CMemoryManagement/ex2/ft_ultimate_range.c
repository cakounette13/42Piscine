/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:42:26 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/11 19:33:14 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
		printf("%d ", tab[i]);
	}
	*range = tab;
	return (**range);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 107;
	max = 750;
	ft_ultimate_range(&range, min, max);
	free(range);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:42:26 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/11 11:22:34 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		**range = NULL;
		return (0);
	}
	**range = malloc(sizeof(int) * size);
	if (**range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
		printf("%d ", *range[i]);
	}
	return (**range);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range[];
	int	*result2;

	min = 1007;
	max = 750;
	
	result2 = ft_ultimate_range(*range[], min, max);
	free(result2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:59:30 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/11 11:07:07 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	size = max - min;	
	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

int	main(void)
{
	int	min;
	int	max;
	int	*result2;

	min = 27;
	max = 750;
	result2 = ft_range(min, max);
	free(result2);
	return (0);
}

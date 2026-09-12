/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:33:33 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/12 16:32:59 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	r;

	size = 0;
	while (*strs[size] != '\0')
	{
		size++;	
	}
	r = malloc(sizeof(char) * size);
	if (size == NULL)
	{
		*strs = NULL;
	}
	
}

int	main(void)
{
	int	size;
	char	**strs;
	char	*sep;

	sep = ",";
	size = 0;
	strs[] = {"hello", "bonjour", "ola"}; 
	printf("%d", size);
	ft_strjoin(size, **strs, *sep);
	return (0);
}

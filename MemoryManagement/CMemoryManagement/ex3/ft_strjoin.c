/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:36:59 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/15 11:58:52 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_size_total(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	size_total;

	i = 0;
	size_total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			size_total++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	size_total += (i * (size - 1));
	return (size_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	r = malloc(sizeof(char) * (ft_size_total(size, strs, sep) + 1));
	if (r == NULL)
		*strs = NULL;
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			r[k++] = strs[i][j++];
		j = 0;
		if (i != (size - 1))
		{
			while (sep[j])
				r[k++] = sep[j++];
		}
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Salut";
	char	str3[] = "Ola";
	char	str4[] = "Bonjour";
	char	*strs[] = {str1, str2, str3, str4};
	char	*sep;
	char    *r;
	int		size;

	sep = ", ";
	size = 4;
	r = ft_strjoin(size, strs, sep);
	printf("%s", r);
	free(r);
	return (0);
}*/

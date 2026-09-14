/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:36:59 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/14 19:09:09 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_size_total(char **strs, char *sep)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	i = 0;
	while (*strs[i] != '\0')
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sep[j] != '\0')
		j++;
	size += (j * (i - 1));
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	r = malloc(sizeof(char) * (size + 1));
	if (r == NULL)
		*strs = NULL;
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			r[k] = strs[i][j];
			j++;
			k++;
		}
		while (sep[j])
		{
			r[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	printf("%s", r);
	return (r);
}

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
	size = 0;
	while (*strs[])
		size++;	       
	r = ft_strjoin(size, strs, sep);
	free(r);
	return (0);
}

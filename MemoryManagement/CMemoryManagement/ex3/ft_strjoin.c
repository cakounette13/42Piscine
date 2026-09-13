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
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
    char	*r;
    int		i;
	int		j;
	
	r = malloc(sizeof(char) * (size + 1));
	if (r == NULL)
	{
		**strs = *r;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			r[j] = strs[i][j];
			j++;
		} 
	    r[j + 1] = r[j] + *sep;
	}
	
	printf("%s\n", r[j]);
    return (r);
}

int	main(void)
{
	int		size;
	char    str1[] = "Hello";
	char    str2[] = "Salut";
	char    str3[] = "Ola";
	char    str4[] = "Bonjour";
	char	*strs[] = {str1, str2, str3, str4};
	char	*sep;
	char    *r;
	int i;
	int j;

    i = 0;
    size = 0;
	sep = ", ";
    while (*strs[i] != '\0')
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            j++;
        }
        size = size + j;
        i++;
    }
	r = ft_strjoin(size, &*strs, sep);
	free(r);
	return (0);
}
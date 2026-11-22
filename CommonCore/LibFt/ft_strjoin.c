/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 10:59:05 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/22 12:05:19 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len_s1;
	int		len_s2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (len_s1 > i)
	{
		new_str[i] = s1[i];
		i++;
	}
	while ((len_s1 + len_s2) > i)
	{
		new_str[i] = s2[i - len_s1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "tripouille";
	s2 = "42";
	s3 = ft_strjoin(s1, s2);
	printf("%s/n", s3);
	free(s3);
	return (0);
}*/
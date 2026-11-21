/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-21 17:54:27 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-21 17:54:27 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
s: The string from which to create the substring.
start: The start index of the substring in the string
’s’.
len: The maximum length of the substring.
*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	len_s;
	int	i;

	i = 0;
	if (s == NULL)
		return NULL;
	len_s = ft_strlen(s);
	if (start + 1 > len_s)
		return (0);
	if (len > len_s - start)
		len = len_s - start;
	ss = malloc(sizeof(char) * (len + 1));
	if (ss == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		ss[i] = s[start + i];
		i++;
	}
	return (ss);
}
/*
int main(void)
{
	char s[] = "Barbapapa";
	char *ss;

	ss = ft_substr(s, 3, 4);
	printf("%s\n", ss);
	free(ss);
	return (0);
}*/
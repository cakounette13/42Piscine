/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-21 17:54:27 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/22 10:38:56 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
s: The string from which to create the substring.
start: The start index of the substring in the string
’s’.
len: The maximum length of the substring.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*ss;
	size_t		len_s;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_calloc(1, 1));
	if (len > len_s - start)
		len = len_s - start;
	ss = malloc(sizeof(char) * (len + 1));
	if (ss == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
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
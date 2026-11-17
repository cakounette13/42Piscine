/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 15:16:26 by dcarine           #+#    #+#             */
/*   Updated: 2026-11-17 15:16:26 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*La  fonction ft_bzero() met à 0 les n premiers octets du bloc pointé par s
	   (octets contenant « \0 »).
*/
void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (str == NULL)
		return ;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	int n = 7;
	char s[] = "bonjour";

	printf("La chaine : %s\n", s);
	ft_bzero(s, n);
	printf("La chaine : %s\n", s);
	return (0);
}*/
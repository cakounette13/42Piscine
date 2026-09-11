/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:19:50 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/09 14:36:24 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	str[] = "Il fait\nchaud";
	ft_putstr_non_printable(str);
	return (0);
}*/

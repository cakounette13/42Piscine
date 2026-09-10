/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:01:06 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/03 18:56:08 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putchar(a % 10 + '0');
	}
	else
	{
		ft_putchar(a + '0');
	}
}

int	main(void)
{
	char	*s;

	s = "Bonjour";
	ft_putchar(*(s + 1));
	return (0);
}

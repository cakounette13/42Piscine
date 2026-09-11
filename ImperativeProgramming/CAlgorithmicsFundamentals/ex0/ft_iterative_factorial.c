/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:11:38 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/02 17:42:40 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	t;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		i = 1;
		t = 1;
		while (i <= nb)
		{
			t *= i;
			i++;
		}
		return (t);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}*/

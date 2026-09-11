/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:57:43 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/03 15:15:03 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	t;

	i = 1;
	t = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		t *= nb;
		power --;
	}
	return (t);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(7, 0));
	return (0);
}*/

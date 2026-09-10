/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:32:51 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/01 17:05:40 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	f(void)
{
	static int	count = 0;

	count++;
	if (count < 5000)
	{
		return (1 + f());
	}
	return (1);
}

int	main(void)
{
	printf("%d", f());
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_program.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:40:37 by dcarine           #+#    #+#             */
/*   Updated: 2026/08/27 12:36:46 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	my_char;

	ft_putchar('A');
	ft_putchar('B');
	ft_putchar('*');
	my_char = 'X';
	ft_putchar(my_char + 1);
	my_char = 'A';
	while (my_char <= 'J')
	{
		ft_putchar(my_char);
		my_char++;
	}
	return (0);
}

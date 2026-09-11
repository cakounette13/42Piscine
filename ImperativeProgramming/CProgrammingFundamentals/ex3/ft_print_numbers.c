/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:20:15 by dcarine           #+#    #+#             */
/*   Updated: 2026/08/28 11:48:39 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb <= '9')
	{
		write(1, &numb, 1);
		numb++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

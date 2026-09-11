/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:52:00 by dcarine           #+#    #+#             */
/*   Updated: 2026/08/28 12:19:17 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
		write (1, &result, 1);
	}
	else
	{
		result = 'P';
		write (1, &result, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/

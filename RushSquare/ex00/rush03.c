/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 10:34:37 by dcarine           #+#    #+#             */
/*   Updated: 2026/08/29 14:47:16 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	ft_condition(int x, int y, int l, int c)
{
	if ((l == 1 && c == 1) || (l == y && c == 1))
	{
		ft_putchar('A');
	}
	else if ((l == 1 && c == x) || (l == y && c == x))
	{
		ft_putchar('C');
	}
	else if ((l == 1 && (c > 1 && c < x)) || (l == y && (c > 1 && c < x)))
	{
		ft_putchar('B');
	}
	else if (((l > 1 && l < y) && c == 1) || ((l > 1 && l < y) && (c == x)))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	c = 1;
	l = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			ft_condition(x, y, l, c);
			c++;
		}
		ft_putchar(10);
		l++;
		c = 1;
	}
}

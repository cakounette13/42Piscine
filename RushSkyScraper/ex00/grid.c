/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:04:06 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/05 19:09:59 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(grid[row][col] + '0');
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	clear_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	count_visible(int a, int b, int c, int d)
{
	int	visible;
	int	max;

	visible = 1;
	max = a;
	if (b > max)
	{
		visible++;
		max = b;
	}
	if (c > max)
	{
		visible++;
		max = c;
	}
	if (d > max)
	{
		visible++;
		max = d;
	}
	return (visible);
}

int	check_columns(int grid[4][4], int *clues)
{
	int	i;
	int	vue;

	i = 0;
	while (i < 4)
	{
		vue = count_visible(grid[0][i], grid[1][i], grid[2][i], grid[3][i]);
		if (vue != clues[i])
			return (0);
		vue = count_visible(grid[3][i], grid[2][i], grid[1][i], grid[0][i]);
		if (vue != clues[i + 4])
			return (0);
	}
	return (1);
}

int	check_rows(int grid[4][4], int *clues)
{
	int	i;
	int	vue;

	i = 0;
	while (i < 4)
	{
		vue = count_visible(grid[i][0], grid[i][1], grid[i][2], grid[i][3]);
		if (vue != clues[i + 8])
			return (0);
		vue = count_visible(grid[i][3], grid[i][2], grid[i][1], grid[i][0]);
		if (vue != clues[i + 12])
			return (0);
	}
	return (1);
}

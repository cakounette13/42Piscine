/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 15:49:59 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/06 12:46:08 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_columns(int grid[4][4], int *clues);
int	check_rows(int grid[4][4], int *clues);

int	check_clues(int grid[4][4], int *clues)
{
	if ((check_columns(grid, clues) == 1) && (check_rows(grid, clues) == 1))
		return (1);
	return (0);
}

int	can_place(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == value)
			return (0);
		if (grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int *clues, int position)
{
	int	row;
	int	col;
	int	value;

	if (position == 16)
		return (check_clues(grid, clues));
	row = position / 4;
	col = position % 4;
	value = 1;
	while (value <= 4)
	{
		if (can_place(grid, row, col, value) == 1)
		{
			grid[row][col] = value;
			if (solve(grid, clues, position + 1))
				return (1);
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}

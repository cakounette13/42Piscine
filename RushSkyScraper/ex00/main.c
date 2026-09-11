/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <dcarine@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:44:04 by dcarine           #+#    #+#             */
/*   Updated: 2026/09/06 17:02:05 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	clear_grid(int grid[4][4]);
int		solve(int grid[4][4], int *clues, int position);
void	print_grid(int grid[4][4]);

int	parse_clues(char *arg, int *clues)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (arg[i] != '\0')
	{
		if ((index >= 16) || (arg[i] < '1') || (arg[i] > '4'))
			return (0);
		clues[index] = arg[i] - '0';
		index++;
		i++;
		if ((arg[i] == ' ') && (index < 16))
			i++;
		else if (arg[i] != '\0')
			return (0);
	}
	if (index != 16)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[16];

	if ((argc != 2) || (parse_clues(argv[1], clues) == 0))
	{
		write(1, "Error\n", 6);
		write(1, "type d'erreur : Mauvaise saisie des valeurs", 43);
		return (1);
	}
	clear_grid(grid);
	if (solve(grid, clues, 0) == 1)
		print_grid(grid);
	else
		write(1, "Error\n Aucune grille ne satisfait ces indices", 45);
	return (0);
}

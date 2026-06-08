/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:15:50 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 15:54:59 by maxperei         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	four_fill(int **grid, int *tab);
void	one_fill(int **grid, int *tab);
int	bt_solver(int **grid, int row, int col);

static int	**make_grid(int **grid)
{
	int	i;

	i = 0;
	grid = malloc(4 * sizeof(*grid));
	if (!grid)
		return (0);
	while (i < 4)
	{
		grid[i] = malloc(4 * sizeof(**grid));
		if (!grid[i])
			return (0);
		i++;
	}
	return (grid);
}

static void	init_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

static void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + 48;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i ++;
	}
}

int	grid(int *tab)
{
	int **grid;

	grid = make_grid(grid);
	init_grid(grid);
	four_fill(grid, tab);
	one_fill(grid, tab);
	if (!bt_solver(grid, 0, 0))
		return (0);
	print_grid(grid);

	return (1);
}

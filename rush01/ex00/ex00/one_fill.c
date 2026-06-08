/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:25:18 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 15:39:28 by mde-fili         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static void	colup(int **grid, int *tab)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (i < 4)
	{
		if (tab[i] == 1)
			grid[0][y] = 4;
		y++;
		i++;
	}
}

static void	coldown(int **grid, int *tab)
{
	int	i;
	int	y;

	i = 4;
	y = 0;
	while (i < 8)
	{
		if (tab[i] == 1)
			grid[3][y] = 4;
		y++;
		i++;
	}
}

static void	rowleft(int **grid, int *tab)
{
	int	i;
	int	x;

	i = 8;
	x = 0;
	while (i < 12)
	{
		if (tab[i] == 1)
			grid[x][0] = 4;
		x++;
		i++;
	}
}

static void	rowright(int **grid, int *tab)
{
	int	i;
	int	x;

	i = 12;
	x = 0;
	while (i < 16)
	{
		if (tab[i] == 1)
			grid[x][3] = 4;
		x++;
		i++;
	}
}

void	one_fill(int **grid, int *tab)
{
	colup(grid, tab);
	coldown(grid, tab);
	rowleft(grid, tab);
	rowright(grid, tab);
}

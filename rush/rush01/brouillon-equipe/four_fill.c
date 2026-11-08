/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:56:55 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 15:38:32 by mde-fili         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static void	colup(int **grid, int *tab)
{
	int	i;
	int	x;
	int	y;
	int	nb;

	i = 0;
	x = 0;
	y = 0;
	nb = 1;
	while (i < 4)
	{
		if (tab[i] == 4)
		{
			while (x < 4)
			{
				grid[x][y] = nb;
				x++;
				nb++;
			}
		}
		y++;
		i++;
	}
}

static void	coldown(int **grid, int *tab)
{
	int	i;
	int	x;
	int	y;
	int	nb;

	i = 4;
	x = 3;
	y = 0;
	nb = 1;
	while (i < 8)
	{
		if (tab[i] == 4)
		{
			while (x > -1)
			{
				grid[x][y] = nb;
				x--;
				nb++;
			}
		}
		y++;
		i++;
	}
}

static void	rowleft(int **grid, int *tab)
{
	int	i;
	int	x;
	int	y;
	int	nb;

	i = 8;
	x = 0;
	y = 0;
	nb = 1;
	while (i < 12)
	{
		if (tab[i] == 4)
		{
			while (y < 4)
			{
				grid[x][y] = nb;
				y++;
				nb++;
			}
		}
		x++;
		i++;
	}
}

static void	rowright(int **grid, int *tab)
{
	int	i;
	int	x;
	int	y;
	int	nb;

	i = 12;
	x = 0;
	nb = 1;
	while (i < 16)
	{
		if (tab[i] == 4)
		{
			while (y > -1)
			{
				grid[x][y] = nb;
				y--;
				nb++;
			}
		}
		x++;
		i++;
	}
}

void	four_fill(int **grid, int *tab)
{
	colup(grid, tab);
	coldown(grid, tab);
	rowleft(grid, tab);
	rowright(grid, tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:52:33 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 20:38:57 by maxperei         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	left_check(int *tab, int **grid, int max, int see)
{
	int i;
	int j;
	int	 view;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		view = 0;
		max = 0;
		see = 0;
		while (++j < 4)
		{
			if (max < grid[i][j])
			{
				see++;
				max = grid[i][j];
			}
		}
		if (see != tab[view])
			return (0);
		view++;
	}
	return (1);
}

int right_check(int *tab, int **grid, int max, int see)
{
	int i;
	int j;
	int	 view;

	i = -1;
	while (++i < 4)
	{
		j = 4;
		view = 0;
		max = 0;
		see = 0;
		while (--j > -1)
		{
			if (max < grid[i][j])
			{
				see++;
				max = grid[i][j];
			}
		}
		if (see != tab[view])
			return (0);
		view++;
	}
	return (1);
}

int	up_check(int *tab, int **grid, int max, int see)
{
	int i;
	int j;
	int	 view;

	j = -1;
	while (++j < 4)
	{
		i = -1;
		view = 0;
		max = 0;
		see = 0;
		while (++i < 4)
		{
			if (max < grid[i][j])
			{
				see++;
				max = grid[i][j];
			}
		}
		if (see != tab[view])
			return (0);
		view++;
	}
	return (1);
}

int down_check(int *tab, int **grid, int max, int see)
{
	int i;
	int j;
	int	 view;

	i = -1;
	j = -1;
	while (++i < 4)
	{

		while (++j < 4)
		{
			if (max < grid[i][j])
			{
				see++;
				max = grid[i][j];
			}
		}
		if (see != tab[view])
			return (0);
		view++;
	}
	return (1);
}

int	checker(int *tab, int **grid)
{
	int	max;
	int	see;

	max = 0;
	see = 0;
	if (!left_check(tab, grid))
		return (0);
	max = 0;
	see = 0;
	if (!right_check(tab, grid))
		return (0);
	max = 0;
	see = 0;
	if (!up_check(tab, grid))
		return (0);
	max = 0;
	see = 0;
	if (!down_check(tab, grid))
		return (0);
	return (1);
}

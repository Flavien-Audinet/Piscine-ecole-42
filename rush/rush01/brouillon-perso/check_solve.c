/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:33:10 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/12 13:37:39 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_solve(int **grid, int col, int row, int num)
{
	int	i;
	int	y;

	i = -1;
	y = -1;
	while (i < 4)
	{
		if (grid[row][++i] == num)
			return (0);
	}
	while (j < 4)
	{
		if (grid[++j][col] == num)
			return (0);
	}
	return (1);
}

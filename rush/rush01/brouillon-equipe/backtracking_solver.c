/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking_solver.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:01:14 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 15:54:43 by maxperei         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_move(int **grid, int row, int col, int num)
{
	int	i;
	int	j;
	i = 0;;
	j = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	while (j < 4)
	{
		if (grid[j][col] == num)
			return (0);
		j++;
	}
	return (1);
}

int	bt_solver(int **grid, int row, int col)
{
    if (col == 4)
	{
		if (row == 3)
			return (1);
		row += 1;
		col = 0;
	}
    if (grid[row][col] != 0)
        return bt_solver(grid, row, col + 1);
    for (int num = 1; num <= 4; num++)
    {
        if (is_valid_move(grid, row, col, num))
        {
            grid[row][col] = num;
            if ( bt_solver(grid, row, col + 1) )
                return (1);
        }
    }
    grid[row][col] = 0;
    return (0);
}

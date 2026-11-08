/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analize_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:24:34 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/21 18:11:59 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_analize_map(char **tab, char obstacle)
{
	int		x;
	int		y;
	char	ob[][];

	x = 0;
	y = 0;
	while (tab[x][y] != '\0')
	{
		if (tab[x][y] == obstacle)
			ob[x][y] = tab[x][y];
		x++;
		y++;
	}
	ft_find_square(ob, tab);
}

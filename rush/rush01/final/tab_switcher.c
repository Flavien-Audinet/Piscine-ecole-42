/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_switcher.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:21:42 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 19:51:23 by maxperei         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static void	first_switcher(int *tab, int *tab_two)
{
	int	i;

	i = -1;
	while (++i < 4)
		tab_two[i] = tab[i + 8];
	i--;
	while (++i < 8)
		tab_two[i] = tab[i + 8];
	i--;
	while (++i < 12)
		tab_two[i] = tab[i - 4];
	i--;
	while (++i < 16)
		tab_two[i] = tab[i - 12];
}

int	*tab_switcher(int *tab)
{
	int *tab_two;

	tab_two = malloc(16 * sizeof(*tab_two));
	if (!tab_two)
		return (0);
	first_switcher(tab, tab_two);
}

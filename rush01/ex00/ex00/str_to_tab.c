/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:56:54 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 15:37:45 by mde-fili         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	*make_tab(int *tab)
{
	int	i;

	tab = malloc(16 * sizeof(*tab));
	if (!tab)
		return (0);
	i = -1;
	while (++i < 16)
		tab[i] = 0;
	return (tab);
}

int	*str_to_tab(char *str)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 0;
	tab = make_tab(tab);
	while (str[i])
	{
		if (i == 31)
			return (0);
		if ((i % 2 == 1) && !(str[i] == ' '))
			return (0);
		if ((i % 2 == 0) && (str[i] >= '1' && str[i] <= '4'))
		{
			tab[j] = str[i] - 48;
			j++;
		}
		else if ((i % 2 == 0) && (str[i] >= '1' && str[i] <= '4'))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (tab);
}

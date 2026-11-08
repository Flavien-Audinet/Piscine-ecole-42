/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:37:24 by maxperei          #+#    #+#             */
/*   Updated: 2021/09/12 22:54:18 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*str_to_tab(char *str);
int	grid(int *tab);
int	valid_tab(int *tab);

int	main(int argc, char **argv)
{
	int	*tab;

	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		tab = str_to_tab(argv[1]);
		if (!tab)
			write(1, "Error\n", 6);
		else
		{
			if (!valid_tab(tab))
				write(1, "Error\n", 6);
			else if (!grid(tab))
				write(1, "Error\n", 6);
		}
	}
	return (0);
}

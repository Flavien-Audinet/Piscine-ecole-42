/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:05:36 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/19 20:01:26 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(void)
{
	write(1, "ERROR", 5);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 1 || argc > 3)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		split(argv);
		free(buf);
		free(dico);
	}
	return (0);
}

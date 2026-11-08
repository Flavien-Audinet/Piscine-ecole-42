/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:05:36 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/18 19:25:56 by faudinet         ###   ########lyon.fr   */
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
	if (input_error(argv) == 0)
	{
		ft_putchar();
		return;
	}
	if (parsing(argv) == 0)
	{
		write(1, "dict error", 10);
		return;
	}
	if (orc(argv) == 0)
	{
		ft_putchar();
		return;
	}
	putchar(argv);
	return;
}

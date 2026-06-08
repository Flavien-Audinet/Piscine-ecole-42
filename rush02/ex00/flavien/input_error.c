/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:28:48 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/18 20:30:27 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	input_error(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
/*int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc && i < 3)
	{
		printf("%d", input_error(argv[i]));
		i++;
	}
	return (0);
}*/

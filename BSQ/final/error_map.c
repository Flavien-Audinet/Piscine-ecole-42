/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgastal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:22:00 by cgastal           #+#    #+#             */
/*   Updated: 2021/09/20 19:12:45 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int line_len(char *str)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\n')
		i++;
	i = 0;
	while (str[i] != '\n')
	{
		j++;
		i++;
	}
	count = j;
	if (len_error(str, count) == 0)
		return (0);
	return (1);
}

int len_error(char *str, int count)
{
	int i;
	int j;
	
	i = 0;
	while (str[i] != '\n')
		i++;
	while (str[i])
	{
		j = 0;
		while (str[i] != '\n')
		{
			j++;
			i++;
		}
		if (j != count || i )
		{
			write(1, "map error\n", 10);
			return (0);
		}
	}
	return (1);
}

int nb_lines(char *str)
{
	int	count;

	count = 0;
	while (str[i])
	{
		if(str[i] == '\n')
			count++;
		i++;
	}
	if (count < 2)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	return (1);
}

int char_error(char *str)
{
	char	*c;

	c[0] = str[1];
	c[1] = str[2];
	c[2] = str[3];

	while (str[i])
	{
		if (str[i] != c[0] || str[i] != c[1] || str[i] != c[2] || str[i] != '\n')
		{
			write(1, "map error\n", 10);
			return (0);
		}
		i++;
	}
	return (1);
}

int error_map(int argc, char **argv)    //attention car "orc.c" donne une "str" pour ce programme
{
	char	*map;
	int		i;

	i = 0;
	if (argc == 1)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	if (line_len(map) == 0)
		return (0);
	if (nb_lines(map) == 0)
		return (0);
	if (char_error(map) == 0)
		return (0);
}

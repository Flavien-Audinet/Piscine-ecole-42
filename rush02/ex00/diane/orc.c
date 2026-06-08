/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manipulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:13:22 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/19 17:10:04 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int	open_read_close(void)
{
	int		file_descriptor;
	char	*buf;
	int		read_return;

	file_descriptor = open(PATH_FILE, O_RDONLY);
	if (file_descriptor == -1)
	{
		write (1, "Dict error\n", 11);
		return (1);
	}
	buf = malloc(sizeof(char) * ft_buf_size(PATH_FILE) + 1);
	if (buf == NULL)
		return (0);
	read_return = read(file_descriptor, buf, ft_buf_size(PATH_FILE));
	buf[read_return] = '\0';
	if (read_return == -1)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	ft_split(buf);
	return (0);
}

int	ft_split(char *dico)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dico[i])
	{
		if ((dico[i] >= '0' && dico[i] <= '9')
			&& (dico[i - 1] < '0' || dico[i - 1] > '9'))
			count++;
		if ((dico[i] >= 'a' && dico[i] <= 'z')
			&& (dico[i - 1] < 'a' || dico[i - 1] > 'z'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_new_dict(int count)
{
	int		i;
	char	dico;

	i = 0;
	dico = malloc(sizeof(char) * count + 1);
	if (dico == NULL)
		return (0);
	return (0);
}

int	ft_buf_size(char *path)
{
	char	buf[1];
	int		file_descriptor;
	int		size;

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor == -1)
		write (1, "Dict error\n", 11);
	size = 0;
	while (read (file_descriptor, buf, 1))
		size++;
	return (size);
}

int	main(void)
{
	open_read_close();
	free(buf);
	free(dico);
}

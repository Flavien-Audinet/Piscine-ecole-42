/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:14:49 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/21 17:37:51 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(long i)
{
	char	c;

	c = '0' + i % 10;
	if (i >= 10)
		ft_putchar(i / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = (-n);
	}
	ft_putchar(n);
}

int	ft_orc(void)
{
	int		fd;
	int		ret;
	int		close(int fd);
	char	buf[BUF_SIZE + 1];

	fd = open ("map", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		//ft_putnbr(ret);
		//ft_putstr(buf);
		//printf("%s", buf);
		error_map(buf);
		ft_split(buf, "\n");
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
int	main(void)
{
	ft_orc();
}

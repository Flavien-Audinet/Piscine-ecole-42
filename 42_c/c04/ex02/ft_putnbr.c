/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:41:30 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/16 14:48:30 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*int main()
{
	ft_putnbr(0);
}*/

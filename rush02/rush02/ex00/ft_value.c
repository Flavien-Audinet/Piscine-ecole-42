/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescoria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:19:44 by mescoria          #+#    #+#             */
/*   Updated: 2021/09/19 19:50:54 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_m(int i)
{
	while (i == 6)
	{
		open_read_close(100000);
		i--;
	}
	while (i == 5)
	{
		open_read_close(10000);
		i--;
	}
	while (i == 4)
	{
		open_read_close(1000);
		i--;
	}
	while (i == 3)
	{
		open_read_close(100);
		i--;
	}
}

int	ft_value(int *str)
{
	int	i;

	while (str[i])
		i++;
	while (i == 10)
	{
		open_read_close(1000000000);
		i--;
	}
	while (i == 9)
	{
		open_read_close(100000000);
		i--;
	}
	while (i == 8)
	{
		open_read_close(10000000);
		i--;
	}
	while (i == 7)
	{
		open_read_close(1000000);
		i--;
	}
	ft_m(i);
}

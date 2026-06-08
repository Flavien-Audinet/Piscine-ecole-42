/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 03:04:39 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/23 20:09:11 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb < 4)
		return (0);
	while (nb > 0)
	{
		nb -= i;
		count++;
		i += 2;
	}
	return (count);
}

int	ft_is_prime(int nb)
{
	int	flag;
	int	i;

	flag = 1;
	i = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			flag = 0;
		i--;
	}
	return (flag);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(-6));
	printf("%d\n", ft_find_next_prime(-12));
	printf("%d\n", ft_find_next_prime(-2147483646));
	printf("%d\n", ft_find_next_prime(-2147483647));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 02:20:49 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/23 20:07:20 by faudinet         ###   ########lyon.fr   */
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
/*#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(2147483647));
}*/

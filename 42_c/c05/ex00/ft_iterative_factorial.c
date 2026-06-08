/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:49:24 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/15 22:10:00 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb)
		result *= nb;
	return (result);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(1));
}*/

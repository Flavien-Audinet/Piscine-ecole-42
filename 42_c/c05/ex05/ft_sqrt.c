/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:56:27 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/21 14:09:48 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	result;

	a = 1;
	while (a < 46341)
	{
		result = a * a;
		if (result == nb)
			return (a);
		a++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(9));
}*/

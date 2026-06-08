/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:30:32 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/22 13:01:56 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min + 1));
	if (*range == NULL)
		return (1);
	while (min <= max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	int *t;
	int	end;
	int	i;

	end = ft_ultimate_range(&t, 7, 13);
	i = 0;
	printf("%d\n", ft_ultimate_range(&t, 7, 13));
	while (i < end)
	{
		printf("%d\n", *(t + i));
		i++;
	}
	return (0);
}*/

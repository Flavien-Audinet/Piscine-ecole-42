/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:49:53 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/23 19:16:37 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	diff;

	i = 0;
	diff = (max - min);
	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * diff);
	range[0] = min;
	range[diff] = max;
	while (++i <= diff)
	{
		range[i] = 0;
		range[i] += (min + i);
	}
	return (range);
}

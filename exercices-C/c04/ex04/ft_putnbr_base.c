/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:17:58 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/16 17:51:19 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned int	ft_strlen(char *base)
{
	unsigned int	counter;

	counter = 0;
	while (*base)
	{
		counter++;
		base++;
	}
	return (counter);
}

int	ft_error_base(char *base)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (base[++j])
	{
		if (i < 2 && base[i] == '\0')
			return (0);
		if (base[i] == 43 || base[i] == 45)
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		if (base[j + 1] == '\0')
		{
			i++;
			j = -1;
		}
		if (i >= 2 && base[i] == '\0')
			return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;
	int	br;

	br = nbr;
	lenbase = ft_strlen(base);
	if (!ft_error_base(base))
		return;
	if (br < 0)
	{
		br *= -1;
		write(1, "-", 1);
	}
	if (br >= lenbase)
	{
		ft_putnbr_base(br / lenbase, base);
		ft_putnbr_base(br % lenbase, base);
	}
	else
	{
		write(1, base + br, 1);
	}
}

#include <stdio.h>
int	main()
{
	char base[] = "01";
	int	nbr = 12;
	printf("%d", ft_putnbr_base(nbr, base));
}

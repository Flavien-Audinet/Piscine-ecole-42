/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 23:47:44 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/19 18:54:55 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_split(char *str)
{
	char *tab;
	int	i;

	i = 0;
	while (str[i])
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
}

#include <stdio.h>
int main()
{
	char str[] = "je suis un tet";
	ft_split(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:26:25 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/23 19:19:25 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*pointer;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	if (str == NULL)
		return (str);
	pointer = str;
	while (*src)
		*pointer++ = *src++;
	*pointer = '\0';
	return (str);
}
/*#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *test = "hey man what's up";
	printf("%s", ft_strdup(test));
}*/

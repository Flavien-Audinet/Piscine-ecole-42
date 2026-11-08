/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:53:17 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/15 20:00:07 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!(to_find[j]))
		return (str);
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_strstr(argv[argc-2], argv[argc-1]));
}*/

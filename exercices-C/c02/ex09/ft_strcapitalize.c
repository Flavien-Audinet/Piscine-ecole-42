/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:38:13 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/09 19:55:02 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowcase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_not_alpha(char str)
{
	if (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')))
	{
		if (!(str >= '0' && str <= '9'))
			return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	islowcase;
	int	notalpha;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = -1;
	while (str[++i])
	{
		islowcase = ft_str_is_lowcase(str[i]);
		if (i >= 0)
			notalpha = ft_str_is_not_alpha(str[i - 1]);
		if (islowcase == 1)
		{
			if (notalpha == 1)
				str[i] -= 32;
		}
	}
	return (str);
}

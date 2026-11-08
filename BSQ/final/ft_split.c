/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:02:35 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/20 19:07:39 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_copy(char *src, char *charset)
{
	char	*cpy;
	int		i;
	int		k;

	i = 0;
	k = i;
	while (is_charset(src[k], charset) == 0 && src[k])
	{
		k++;
	}
	cpy = (char *)malloc(sizeof(char) * (k - i) + 1);
	if (cpy == NULL)
		return (NULL);
	while (src[i] && i < k)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	ft_size_split(char *str, char *charset, int index)
{
	int		count;
	int		boolean;

	count = 0;
	boolean = 0;
	while (str[index])
	{
		if (is_charset(str[index], charset) == 0)
			boolean = 1;
		if (is_charset(str[index], charset) && boolean == 1)
		{
			count++;
			boolean = 0;
		}
		index++;
	}
	if (boolean == 1)
		count++;
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (is_charset(str[i], charset))
		i++;
	while (is_charset(str[i], charset) == 0)
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		i;
	int		j;
	int		index;

	output = malloc(sizeof(char *) * ft_size_split(str, charset, 0) + 1);
	if (output == NULL)
		return (NULL);
	i = 0;
	j = 0;
	index = 0;
	while (i < ft_size_split(str, charset, 0))
	{	
		while (is_charset(str[index], charset))
			index++;
		output[j] = ft_copy(&str[index], charset);
		index = index + ft_word_len(&str[index], charset);
		i++;
		j++;
	}
	output[j] = 0;
	return (output);
}

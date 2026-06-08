int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char *tab_map (char *str)
{
	int i; 

	i = ft_strlen(str);


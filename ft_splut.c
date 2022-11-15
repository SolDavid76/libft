size_t	wordcount(const char *str, char c)
{
	size_t i;
	size_t res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			res++;
		i++;
	}
	return (res);
}

size_t	wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

void	freeall(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	int		index;
	char	**res;

	res = malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	index = 0;
	while (str[i])
	{
		if (str[index] == c)
		{
			res[index] = malloc(sizeof(char) * (i - j + 1));
			if (!res)
				freeall(res);
			index++;
			j = i;
		}
		i++;
	}
}

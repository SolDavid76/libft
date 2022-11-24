/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:00:59 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/24 11:57:20 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*freeall(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	nbr_word(char const *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == c && i != 0 && str[i - 1] != c)
			len++;
		i++;
	}
	if (i != 0 && str[i - 1] != c)
		len++;
	return (len);
}

static char	*ft_strdup_split(const char *str, char c)
{
	int		i;
	int		v;
	char	*extracted;

	i = 0;
	v = 0;
	while (str[i] && str[i] != c)
		i++;
	extracted = malloc((i + 1) * sizeof (char));
	i = 0;
	if (!extracted)
		return (0);
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		extracted[v] = str[i];
		i++;
		v++;
	}
	extracted[v] = '\0';
	return (extracted);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split_tab;

	i = 0;
	j = 0;
	split_tab = malloc((nbr_word((char *)s, c) + 1) * sizeof(char *));
	if (!split_tab)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		split_tab[j] = ft_strdup_split(&s[i], c);
		if (!split_tab[j])
			return (freeall(split_tab));
		while (s[i] != c && s[i])
			i++;
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	split_tab[nbr_word((char *)s, c)] = 0;
	return (split_tab);
}

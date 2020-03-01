/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:24:31 by mymik             #+#    #+#             */
/*   Updated: 2019/11/07 14:12:00 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_get_table(char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	counter;
	char	**tab;

	i = 0;
	j = 0;
	counter = 0;
	while (i < ft_strlen(s))
	{
		j = i;
		while (j < ft_strlen(s) && s[j] != c)
			j++;
		if (j > i)
		{
			counter++;
			i = j;
		}
		i++;
	}
	tab = (char**)malloc(sizeof(char*) * (counter + 1));
	return (tab);
}

static char		*get_str(char *s, size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		ft_memmove(str, s, len);
		str[len] = '\0';
	}
	return (str);
}

static char		**free_tab(int counter, char **tab)
{
	int i;

	i = 0;
	while (i < counter + 1)
		free(tab[counter++]);
	free(tab);
	return (NULL);
}

static char		**ft_fill_table(char **tab, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (i < ft_strlen(s))
	{
		j = i;
		while (j < ft_strlen(s) && s[j] != c)
			j++;
		if (j > i)
		{
			tab[counter] = get_str((char*)&s[i], j - i);
			if (!tab[counter])
				return (free_tab(counter, tab));
			counter++;
			i = j;
		}
		i++;
	}
	tab[counter] = NULL;
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_get_table((char*)s, c);
	if (!tab)
		return (NULL);
	return (ft_fill_table(tab, (char*)s, c));
}

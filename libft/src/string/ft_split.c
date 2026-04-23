/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:27:13 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:31:19 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*next_word(char **s, char c)
{
	const char	*start;
	size_t		len;
	char		*word;
	size_t		i;

	while (**s == c)
		(*s)++;
	start = *s;
	len = 0;
	while (start[len] && start[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

static void	free_split(char **split, size_t n)
{
	while (n > 0)
		free(split[--n]);
	free(split);
}

static char	**fill_sp(char **split, char *tr, char c, size_t wrd)
{
	size_t	i;
	char	*copy;

	i = 0;
	while (i < wrd)
	{
		copy = next_word(&tr, c);
		if (!copy)
		{
			free_split(split, i);
			return (NULL);
		}
		split[i++] = copy;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	char		*trimmed;
	char		trim_set[2];
	size_t		words;

	if (!s)
		return (NULL);
	trim_set[0] = c;
	trim_set[1] = '\0';
	trimmed = ft_strtrim(s, trim_set);
	if (!trimmed)
		return (NULL);
	words = count_words(trimmed, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (free(trimmed), NULL);
	split = fill_sp(split, trimmed, c, words);
	free(trimmed);
	return (split);
}

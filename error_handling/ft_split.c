/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:25:54 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:39 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*copy_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	word_length(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	start = i;
	while (s[i] && s[i] != c)
		i++;
	len = i - start;
	return (len);
}

static char	**free_words(char **words, size_t count)
{
	while (count > 0)
	{
		count--;
		free(words[count]);
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	words_count;
	size_t	word_len;
	size_t	i;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	words = malloc((words_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		while (*s && *s == c)
			s++;
		word_len = word_length(s, c);
		words[i] = copy_word(s, word_len);
		if (!words[i])
			return (free_words(words, i));
		s += word_len;
		i++;
	}
	words[i] = NULL;
	return (words);
}
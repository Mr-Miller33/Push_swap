#include "push_swap.h"

static char	**words_alloc(char const *s, char sep, size_t n, char **p)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	word_len = 0;
	i = 0;
	j = 0;
	while (i < n)
	{
		word_len = 0;
		while (s[j] && s[j] == sep)
			j++;
		while (s[j] && !(s[j] == sep))
		{
			word_len++;
			j++;
		}
		p[i] = (char *)malloc(word_len + 1);
		if (!p[i])
			return (ft_free(p, i));
		p[i][word_len] = '\0';
		i++;
	}
	return (p);
}
static char	**fill_strings(char **p, char const *s, char sep)
{
	size_t	i_init;
	size_t	i;
	size_t	j;

	i_init = 0;
	i = 0;
	j = 0;
	while (p[i_init])
	{
		i = 0;
		while (s[j] && (s[j] == sep))
		{
			j++;
		}
		while (s[j] && !(s[j] == sep))
		{
			p[i_init][i] = s[j];
			i++;
			j++;
		}
		i_init++;
	}
	return (p);
}
char	**ft_split(char const *s, char sep)
{
	size_t	count_words;
	char	**p;

	if (!s)
		return (NULL);
	count_words = ft_count_words(s, sep);
	p = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (!p)
		return (NULL);
	p[count_words] = NULL;
	p = words_alloc(s, sep, count_words, p);
	if (!p)
		return (NULL);
	p = fill_strings(p, s, sep);
	return (p);
}

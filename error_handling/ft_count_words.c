#include "push_swap.h"

size_t	ft_count_words(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!(s[i] == sep))
		{
			count++;
			i++;
		}
		while (s[i] && !(s[i] == sep))
		{
			i++;
		}
		while (s[i] && (s[i] == sep))
		{
			i++;
		}
	}
	return (count);
}

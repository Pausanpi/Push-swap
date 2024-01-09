#include "../include/push_swap.h"

static int	count_words(char *s, char c)
{
	int		count;
	bool	inside_word;
	
	count = 0;
	while (*s)
	{
		inside_word = false;
		while (*s == c)
			++s;  //probar a poner s++
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				++count;  //probar a poner count++
				inside_word = true;
			}
			++s;  //probar a poner s++
		}
	}
	return (count);
}

static char *get_next_word(char *s, char c)
{
	static int	cursor = 0;
}

#include "main.h"

int	check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i, n;

	i = 0;

	while (s[i] != '\0')
	{
		if (!_check(s[i], accept))
			return (i);
		i++;
	}
	return (i);
}

#include "main.h"

/**
 * *_strchr - finds the first occurrence of a character in a given string
 * @s: null terminated source string
 * @c: character to be located
 * Return: return pointer to a byte, or null if the byte was not found
 */

char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (0);
}

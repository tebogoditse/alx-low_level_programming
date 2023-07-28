#include "main.h"

/**
 * *cap_string - capitalizes the string
 * @s: string argument
 * Return: returns the capitalized string
 */

char	*cap_string(char *s)
{
	int i, j;

	char s_chars[13] = {' ', '\t', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\n'};
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		j = 0;
		while (j <= 12)
		{
			if (s[i] == s_chars[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}

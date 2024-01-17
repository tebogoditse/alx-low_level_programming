#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring 'needle'
 * in the string 'haystack'
 * @haystack: main string to be scanned
 * @needle: substring to be searched in the main string
 * Return: returns a pointer to the first occurrence in haystack
 * of any of the entire sequence of characters specified in needle,
 * or a null pointer if the sequence is not present in haystack.
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i, j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			++j;
		}
		++i;
	}
	return (0);
}

#include "main.h"

/**
 * *_memset - sets the first n bytes to the value c
 * @dest: pointer to destination
 * @c: character to set
 * @n: number of bytes to set to the value
 * Return: the value of dest
 */

char	*_memset(char *dest, char c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: pointer to where we copy the string
 * @src: the string to be copied
 * Return: pointer to dest
 */

char	*_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len])
		len++;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

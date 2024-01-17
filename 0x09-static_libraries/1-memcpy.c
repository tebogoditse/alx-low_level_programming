#include "main.h"

/**
 * *_memcpy - copies n bytes from src to dest
 * @dest: new buffer
 * @src: buffer to copy from
 * @n: number of characters to copy
 * Return: value of dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

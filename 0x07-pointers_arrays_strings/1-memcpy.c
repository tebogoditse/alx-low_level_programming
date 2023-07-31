#include "main.h"

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

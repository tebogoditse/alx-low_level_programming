#include "main.h"

char	*_memset(char *dest, char src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src;
		i++;
	}
	return (dest);
}

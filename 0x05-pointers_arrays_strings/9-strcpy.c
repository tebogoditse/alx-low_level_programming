#include "main.h"

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

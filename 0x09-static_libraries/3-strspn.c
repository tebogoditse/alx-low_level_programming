#include "main.h"

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i;

	i = 0;

	while (s[i] != '\0')
	{
		if (!_check(s[i], accept))
			return (i);
		i++;
	}
	return (i);
}

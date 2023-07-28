#include "main.h"

char	*rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		if ((str[i] >= 'n' && str[i] <= 'z') && (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
		i++;
	}
	return (s);
}

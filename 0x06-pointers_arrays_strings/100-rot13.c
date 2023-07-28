#include "main.h"

char	*rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + 13;
			if (s[i] > 'z')
				s[i] = s[i] - 26;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 13;
			if (s[i] > 'Z')
				s[i] = s[i] - 26;
		}
		i++;
	}
	return (s);
}

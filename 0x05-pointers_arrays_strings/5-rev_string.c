#include "main.h"

/**
 * rev_string - reverses the input string
 * @s: the string parameter
 */

void	rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i])
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}

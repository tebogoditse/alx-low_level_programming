#include "main.h"

/**
 * puts_half - prints the second half on the string
 * @str: the parameter string
 */

void	puts_half(char *str)
{
	int i, j;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (j++; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

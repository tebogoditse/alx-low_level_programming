#include "main.h"

/**
 * puts2 - prints out even number characters
 * @str: parameter string
 */

void	puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len])
		len++;

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - prints a string in reverse, then followed by a new line
 * @s: the string paramter to be reversed
 */

void	print_rev(char *s)
{
	int i;
	int j;
	int len;

	i = 0;
	while (s[i])
		i++;
	
	len = i;
	j = len - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

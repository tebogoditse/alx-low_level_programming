#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse, using recursion
 * @s: string to be reversed
 * Return: void function
 */

void	_print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}

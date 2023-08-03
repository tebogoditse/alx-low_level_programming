#include "main.h"

/**
 * _puts_recursion - prints a string using recursion, followed by a new line
 * @s: string to be printed
 * Return: void function
 */

void	_puts_recursion(char *s)
{
	_putchar(s[0]);
	_puts_recursion(s + 1);

}

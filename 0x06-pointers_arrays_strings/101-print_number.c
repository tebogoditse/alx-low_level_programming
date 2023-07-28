#include "main.h"

/**
 * print_number - prints a number
 * @n: input parameter
 * Return: void
 */

void	print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 > 9)
	{
		_putchar(n1 / 10);
		n1 = n1 % 10;
	}
	if (n1 < 10)
		_putchar((n1 % 10) + 48);
}

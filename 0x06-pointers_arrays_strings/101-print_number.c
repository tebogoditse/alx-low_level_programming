#include "main.h"

/**
 * print_number - prints a number
 * @n: input parameter
 * Return: void
 */

void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n1 = nb * -1;
	}
	if (n > 9)
	{
		_putchar(n / 10);
		_putchar(n % 10);
	}
	else
		_putchar(n + 48);
}

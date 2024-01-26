#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the arguments, separator by a given character
 * @separator: character to print between the numbers
 * @n: number of arguments
 * Return: no return (void)
 */
void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list	ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
